/*
 * Copyright (c) 2007-2008 Apple Inc.  All rights reserved.
 *
 * @APPLE_LICENSE_HEADER_START@
 * 
 * "Portions Copyright (c) 2007 Apple Inc.  All Rights
 * Reserved.  This file contains Original Code and/or Modifications of
 * Original Code as defined in and that are subject to the Apple Public
 * Source License Version 1.0 (the 'License').  You may not use this file
 * except in compliance with the License.  Please obtain a copy of the
 * License at http://www.apple.com/publicsource and read it before using
 * this file.
 * 
 * The Original Code and all software distributed under the License are
 * distributed on an 'AS IS' basis, WITHOUT WARRANTY OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, AND APPLE HEREBY DISCLAIMS ALL SUCH WARRANTIES,
 * INCLUDING WITHOUT LIMITATION, ANY WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE OR NON-INFRINGEMENT.  Please see the
 * License for the specific language governing rights and limitations
 * under the License."
 * 
 * @APPLE_LICENSE_HEADER_END@
 */

#include <asl_core.h>
#include <asl_file.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/errno.h>
#include <string.h>
#include <sys/stat.h>
#include <time.h>
#include <sys/time.h>
#include <asl_private.h>
#include <asl_legacy1.h>

extern time_t asl_parse_time(const char *str);
extern int asl_msg_cmp(asl_msg_t *a, asl_msg_t *b);

#define forever for(;;)
#define MILLION 1000000

/*
 * MSG and STR records have (at least) a type (uint16_t) and a length (uint32_t)
 * type and level are both 16 bit fields so that alignment isn't a pain.
 */
#define RECORD_COMMON_LEN 6
#define RECORD_TYPE_LEN 2
#define RECORD_OFFSET_FLAGS 30
#define RECORD_OFFSET_RUID 44
#define RECORD_OFFSET_RGID 48

#define SCRATCH_BUFFER_SIZE (MSG_RECORD_FIXED_LENGTH + (20 * sizeof(uint64_t)))

typedef struct
{
	uint64_t next;
	uint64_t mid;
	uint64_t time;
	uint32_t nano;
	uint16_t level;
	uint16_t flags;
	uint32_t pid;
	uint32_t uid;
	uint32_t gid;
	uint32_t ruid;
	uint32_t rgid;
	uint32_t refpid;
	uint32_t kvcount;
	uint64_t host;
	uint64_t sender;
	uint64_t facility;
	uint64_t message;
	uint64_t refproc;
	uint64_t session;
	uint64_t prev;
} file_record_t;

typedef struct
{
	asl_file_list_t *list;
	int dir;
} asl_file_match_token_t;

static uint16_t
_asl_get_16(char *h)
{
	uint16_t x;

	memcpy(&x, h, 2);
	return ntohs(x);
}

static void
_asl_put_16(uint16_t i, char *h)
{
	uint16_t x;

	x = htons(i);
	memcpy(h, &x, 2);
}

static uint32_t
_asl_get_32(char *h)
{
	uint32_t x;

	memcpy(&x, h, 4);
	return ntohl(x);
}

static void
_asl_put_32(uint32_t i, char *h)
{
	uint32_t x;

	x = htonl(i);
	memcpy(h, &x, 4);
}

static uint64_t
_asl_get_64(char *h)
{
	uint64_t x;

	memcpy(&x, h, 8);
	return asl_core_ntohq(x);
}

static void
_asl_put_64(uint64_t i, char *h)
{
	uint64_t x;

	x = asl_core_htonq(i);
	memcpy(h, &x, 8);
}

static uint32_t
asl_file_read_uint32(asl_file_t *s, off_t off, uint32_t *out)
{
	uint32_t status, val;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (s->store == NULL) return ASL_STATUS_INVALID_STORE;

	status = fseeko(s->store, off, SEEK_SET);
	if (status != 0) return ASL_STATUS_READ_FAILED;

	val = 0;

	status = fread(&val, sizeof(uint32_t), 1, s->store);
	if (status != 1) return ASL_STATUS_READ_FAILED;

	if (out != NULL) *out = ntohl(val);
	return ASL_STATUS_OK;
}

static uint32_t
asl_file_read_uint64(asl_file_t *s, off_t off, uint64_t *out)
{
	uint32_t status;
	uint64_t val;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (s->store == NULL) return ASL_STATUS_INVALID_STORE;

	status = fseeko(s->store, off, SEEK_SET);
	if (status != 0) return ASL_STATUS_READ_FAILED;

	val = 0;

	status = fread(&val, sizeof(uint64_t), 1, s->store);
	if (status != 1) return ASL_STATUS_READ_FAILED;

	if (out != NULL) *out = asl_core_ntohq(val);
	return ASL_STATUS_OK;
}

uint32_t
asl_file_close(asl_file_t *s)
{
	file_string_t *x;

	if (s == NULL) return ASL_STATUS_OK;

	if (s->version == 1)
	{
		return asl_legacy1_close((asl_legacy1_t *)s->legacy);
	}

	while (s->string_list != NULL)
	{
		x = s->string_list->next;
		free(s->string_list);
		s->string_list = x;
	}

	if (s->store != NULL) fclose(s->store);

	memset(s, 0, sizeof(asl_file_t));
	free(s);

	return ASL_STATUS_OK;
}

uint32_t
asl_file_open_write(const char *path, mode_t mode, uid_t uid, gid_t gid, asl_file_t **s)
{
	time_t now;
	int i, status, fd;
	struct stat sb;
	char buf[DB_HEADER_LEN];
	asl_file_t *out;
	uint32_t aslstatus, vers;

	memset(&sb, 0, sizeof(struct stat));

	status = stat(path, &sb);
	if (status == 0)
	{
		/* XXX Check that mode, uid, and gid are correct */
		out = (asl_file_t *)calloc(1, sizeof(asl_file_t));
		if (out == NULL) return ASL_STATUS_NO_MEMORY;

		out->store = fopen(path, "r+");
		if (out->store == NULL)
		{
			free(out);
			return ASL_STATUS_FAILED;
		}

		out->file_size = sb.st_size;

		i = fread(buf, DB_HEADER_LEN, 1, out->store);
		if (i < 1)
		{
			asl_file_close(out);
			return ASL_STATUS_READ_FAILED;
		}

		/* check version */
		vers = _asl_get_32(buf + DB_HEADER_VERS_OFFSET);
		if (vers != DB_VERSION)
		{
			asl_file_close(out);
			return ASL_STATUS_INVALID_STORE;
		}

		out->dob = _asl_get_64(buf + DB_HEADER_TIME_OFFSET);
		out->first = _asl_get_64(buf + DB_HEADER_FIRST_OFFSET);
		out->last = _asl_get_64(buf + DB_HEADER_LAST_OFFSET);

		aslstatus = asl_file_read_set_position(out, ASL_FILE_POSITION_LAST);
		if (aslstatus != ASL_STATUS_OK)
		{
			asl_file_close(out);
			return aslstatus;
		}

		out->prev = out->cursor;
		status = fseeko(out->store, 0, SEEK_END);
		if (status != 0)
		{
			asl_file_close(out);
			return ASL_STATUS_READ_FAILED;
		}

		out->file_size = ftello(out->store);

		/* scratch buffer for file writes (we test for NULL before using it) */
		out->scratch = malloc(SCRATCH_BUFFER_SIZE);

		*s = out;

		return ASL_STATUS_OK;
	}

	if (errno != ENOENT) return ASL_STATUS_FAILED;

	fd = open(path, O_RDWR | O_CREAT | O_EXCL, mode);
	if (fd < 0) return ASL_STATUS_FAILED;

	status = fchown(fd, uid, gid);
	if (status != 0)
	{
		close(fd);
		unlink(path);
		return ASL_STATUS_FAILED;
	}

	out = (asl_file_t *)calloc(1, sizeof(asl_file_t));
	if (out == NULL) return ASL_STATUS_NO_MEMORY;

	out->store = fdopen(fd, "w+");
	if (out->store == NULL)
	{
		free(out);
		return ASL_STATUS_FAILED;
	}

	memset(buf, 0, sizeof(buf));
	memcpy(buf, ASL_DB_COOKIE, ASL_DB_COOKIE_LEN);

	_asl_put_32(DB_VERSION, buf + DB_HEADER_VERS_OFFSET);

	now = time(NULL);
	out->dob = now;
	_asl_put_64(out->dob, buf + DB_HEADER_TIME_OFFSET);

	_asl_put_32(CACHE_SIZE, buf + DB_HEADER_CSIZE_OFFSET);

	status = fwrite(buf, sizeof(buf), 1, out->store);
	if (status != 1)
	{
		fclose(out->store);
		free(out);
		unlink(path);
		return ASL_STATUS_FAILED;
	}

	out->file_size = sizeof(buf);

	*s = out;

	return ASL_STATUS_OK;
}

uint32_t
asl_file_compact(asl_file_t *s, const char *path, mode_t mode, uid_t uid, gid_t gid)
{
	asl_file_t *new;
	struct stat sb;
	aslmsg m;
	uint64_t xid;
	uint32_t status;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (path == NULL) return ASL_STATUS_INVALID_ARG;

	if (s->version == 1) return ASL_STATUS_FAILED;

	memset(&sb, 0, sizeof(struct stat));

	if (stat(path, &sb) == 0) return ASL_STATUS_FAILED;
	if (errno != ENOENT) return ASL_STATUS_FAILED;

	status = asl_file_read_set_position(s, ASL_FILE_POSITION_FIRST);
	if (status != ASL_STATUS_OK) return status;

	new = NULL;
	status = asl_file_open_write(path, mode, uid, gid, &new);
	if (status != ASL_STATUS_OK) return status;
	new->flags = ASL_FILE_FLAG_UNLIMITED_CACHE | ASL_FILE_FLAG_PRESERVE_MSG_ID;

	while ((status == ASL_STATUS_OK) && (s->cursor != 0))
	{
		m = NULL;
		status = asl_file_fetch_next(s, &m);
		if (status != ASL_STATUS_OK) break;

		xid = 0;
		status = asl_file_save(new, m, &xid);
		asl_free(m);
	}

	asl_file_close(new);
	return status;
}

static uint32_t
asl_file_string_encode(asl_file_t *s, const char *str, uint64_t *out)
{
	uint32_t i, hash, len, x32;
	file_string_t *sp, *sx, *sl;
	uint64_t x64;
	uint8_t inls;
	uint16_t type;
	off_t off;
	char *p;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (str == NULL) return ASL_STATUS_INVALID_ARG;

	len = strlen(str);

	/* inline strings */
	if (len < 8)
	{
		/* inline string */
		inls = len;
		inls |= 0x80;

		x64 = 0;
		p = (char *)&x64;
		memcpy(p, &inls, 1);
		memcpy(p + 1, str, len);
		*out = asl_core_ntohq(x64);
		return ASL_STATUS_OK;
	}

	/* check the cache */
	hash = asl_core_string_hash(str, len);

	sp = NULL;
	for (sx = s->string_list; sx != NULL; sx = sx->next)
	{
		if ((hash == sx->hash) && (!strcmp(str, sx->str)))
		{
			/* Move this string to the head of the list */
			if (sp != NULL)
			{
				sl = s->string_list;
				sp->next = sx->next;
				sx->next = sl;
				s->string_list = sx;
			}

			*out = sx->where;
			return ASL_STATUS_OK;
		}

		sp = sx;
	}

	off = ftello(s->store);

	/* Type */
	type = htons(ASL_FILE_TYPE_STR);
	i = fwrite(&type, sizeof(uint16_t), 1, s->store);
	if (i != 1) return ASL_STATUS_WRITE_FAILED;
	s->file_size += sizeof(uint16_t);

	/* Length (includes trailing nul) */
	x32 = htonl(len + 1);
	i = fwrite(&x32, sizeof(uint32_t), 1, s->store);
	if (i != 1) return ASL_STATUS_WRITE_FAILED;
	s->file_size += sizeof(uint32_t);

	/* String data (nul terminated) */
	i = fwrite(str, len + 1, 1, s->store);
	if (i != 1) return ASL_STATUS_WRITE_FAILED;
	s->file_size += len;

	/* create file_string_t and insert into the cache */
	sx = (file_string_t *)calloc(1, offsetof(file_string_t, str) + len + 1);
	if (sx == NULL) return ASL_STATUS_NO_MEMORY;

	sx->where = off;
	sx->hash = hash;
	sx->next = s->string_list;
	memcpy(sx->str, str, len);

	s->string_list = sx;

	if (((s->flags & ASL_FILE_FLAG_UNLIMITED_CACHE) == 0) && (s->string_count == CACHE_SIZE))
	{
		/* drop last (lru) string from cache */
		sp = s->string_list;
		sx = sp->next;

		/* NB CACHE_SIZE must be > 1 */
		while (sx->next != NULL)
		{
			sp = sx;
			sx = sx->next;
		}

		sp->next = NULL;
		free(sx);
	}
	else
	{
		s->string_count++;
	}

	*out = off;
	return ASL_STATUS_OK;
}

/*
 * Encode an aslmsg as a record structure.
 * Creates and caches strings.
 */
uint32_t
asl_file_save(asl_file_t *s, aslmsg msg, uint64_t *mid)
{
	char *buf, *p;
	uint32_t len, i, status;
	file_record_t r;
	uint64_t k, v;
	uint64_t *kvlist;
	off_t off;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (msg == NULL) return ASL_STATUS_INVALID_MESSAGE;

	if (s->flags & ASL_FILE_FLAG_READ_ONLY) return ASL_STATUS_READ_ONLY;

	memset(&r, 0, sizeof(file_record_t));

	r.flags = 0;
	r.level = ASL_LEVEL_DEBUG;
	r.pid = -1;
	r.uid = -2;
	r.gid = -2;
	r.ruid = -1;
	r.rgid = -1;
	r.time = 0;
	r.nano = 0;
	r.prev = s->prev;
	kvlist = NULL;

	for (i = 0; i < msg->count; i++)
	{
		if (msg->key[i] == NULL)
		{
			continue;
		}
		else if (!strcmp(msg->key[i], ASL_KEY_TIME))
		{
			if (msg->val[i] != NULL) r.time = asl_parse_time(msg->val[i]);
		}
		else if (!strcmp(msg->key[i], ASL_KEY_TIME_NSEC))
		{
			if (msg->val[i] != NULL) r.nano = atoi(msg->val[i]);
		}
		else if (!strcmp(msg->key[i], ASL_KEY_HOST))
		{
			if (msg->val[i] != NULL)
			{
				status = asl_file_string_encode(s, msg->val[i], &(r.host));
				if (status != ASL_STATUS_OK)
				{
					if (kvlist != NULL) free(kvlist);
					return status;
				}
			}
		}
		else if (!strcmp(msg->key[i], ASL_KEY_SENDER))
		{
			if (msg->val[i] != NULL)
			{
				status = asl_file_string_encode(s, msg->val[i], &(r.sender));
				if (status != ASL_STATUS_OK)
				{
					if (kvlist != NULL) free(kvlist);
					return status;
				}
			}
		}
		else if (!strcmp(msg->key[i], ASL_KEY_PID))
		{
			if (msg->val[i] != NULL) r.pid = atoi(msg->val[i]);
		}
		else if (!strcmp(msg->key[i], ASL_KEY_REF_PID))
		{
			if (msg->val[i] != NULL) r.refpid = atoi(msg->val[i]);
		}
		else if (!strcmp(msg->key[i], ASL_KEY_UID))
		{
			if (msg->val[i] != NULL) r.uid = atoi(msg->val[i]);
		}
		else if (!strcmp(msg->key[i], ASL_KEY_GID))
		{
			if (msg->val[i] != NULL) r.gid = atoi(msg->val[i]);
		}
		else if (!strcmp(msg->key[i], ASL_KEY_LEVEL))
		{
			if (msg->val[i] != NULL) r.level = atoi(msg->val[i]);
		}
		else if (!strcmp(msg->key[i], ASL_KEY_MSG))
		{
			if (msg->val[i] != NULL)
			{
				status = asl_file_string_encode(s, msg->val[i], &(r.message));
				if (status != ASL_STATUS_OK)
				{
					if (kvlist != NULL) free(kvlist);
					return status;
				}
			}
		}
		else if (!strcmp(msg->key[i], ASL_KEY_FACILITY))
		{
			if (msg->val[i] != NULL)
			{
				status = asl_file_string_encode(s, msg->val[i], &(r.facility));
				if (status != ASL_STATUS_OK)
				{
					if (kvlist != NULL) free(kvlist);
					return status;
				}
			}
		}
		else if (!strcmp(msg->key[i], ASL_KEY_REF_PROC))
		{
			if (msg->val[i] != NULL)
			{
				status = asl_file_string_encode(s, msg->val[i], &(r.refproc));
				if (status != ASL_STATUS_OK)
				{
					if (kvlist != NULL) free(kvlist);
					return status;
				}
			}
		}
		else if (!strcmp(msg->key[i], ASL_KEY_SESSION))
		{
			if (msg->val[i] != NULL)
			{
				status = asl_file_string_encode(s, msg->val[i], &(r.session));
				if (status != ASL_STATUS_OK)
				{
					if (kvlist != NULL) free(kvlist);
					return status;
				}
			}
		}
		else if (!strcmp(msg->key[i], ASL_KEY_READ_UID))
		{
			if (((r.flags & ASL_MSG_FLAG_READ_UID_SET) == 0) && (msg->val[i] != NULL))
			{
				r.ruid = atoi(msg->val[i]);
				r.flags |= ASL_MSG_FLAG_READ_UID_SET;
			}
		}
		else if (!strcmp(msg->key[i], ASL_KEY_READ_GID))
		{
			if (((r.flags & ASL_MSG_FLAG_READ_GID_SET) == 0) && (msg->val[i] != NULL))
			{
				r.rgid = atoi(msg->val[i]);
				r.flags |= ASL_MSG_FLAG_READ_GID_SET;
			}
		}
		else if (!strcmp(msg->key[i], ASL_KEY_MSG_ID))
		{
			if (s->flags & ASL_FILE_FLAG_PRESERVE_MSG_ID) *mid = atoll(msg->val[i]);
		}
		else
		{
			status = asl_file_string_encode(s, msg->key[i], &k);
			if (status != ASL_STATUS_OK)
			{
				if (kvlist != NULL) free(kvlist);
				return status;
			}

			v = 0;
			if (msg->val[i] != NULL)
			{
				status = asl_file_string_encode(s, msg->val[i], &v);
				if (status != ASL_STATUS_OK)
				{
					if (kvlist != NULL) free(kvlist);
					return status;
				}
			}

			if (r.kvcount == 0)
			{
				kvlist = (uint64_t *)calloc(2, sizeof(uint64_t));
			}
			else
			{
				kvlist = (uint64_t *)reallocf(kvlist, (r.kvcount + 2) * sizeof(uint64_t));
			}

			if (kvlist == NULL)
			{
				return ASL_STATUS_NO_MEMORY;
			}

			kvlist[r.kvcount++] = k;
			kvlist[r.kvcount++] = v;
		}
	}

	len = MSG_RECORD_FIXED_LENGTH + (r.kvcount * sizeof(uint64_t));
	buf = NULL;

	/* use the scratch buffer if it exists and is large enough */
	if ((s->scratch != NULL) && (len <= SCRATCH_BUFFER_SIZE))
	{
		memset(s->scratch, 0, SCRATCH_BUFFER_SIZE);
		buf = s->scratch;
	}
	else
	{
		buf = calloc(1, len);
	}

	if (buf == NULL) return ASL_STATUS_NO_MEMORY;

	if (*mid != 0)
	{
		r.mid = *mid;
	}
	else
	{
		r.mid = asl_core_new_msg_id(0);
		*mid = r.mid;
	}

	p = buf;

	/* Type */
	_asl_put_16(ASL_FILE_TYPE_MSG, p);
	p += sizeof(uint16_t);

	/* Length of message (excludes type and length fields) */
	_asl_put_32(len - RECORD_COMMON_LEN, p);
	p += sizeof(uint32_t);

	/* Message data... */

	_asl_put_64(r.next, p);
	p += sizeof(uint64_t);

	_asl_put_64(r.mid, p);
	p += sizeof(uint64_t);

	_asl_put_64(r.time, p);
	p += sizeof(uint64_t);

	_asl_put_32(r.nano, p);
	p += sizeof(uint32_t);

	_asl_put_16(r.level, p);
	p += sizeof(uint16_t);

	_asl_put_16(r.flags, p);
	p += sizeof(uint16_t);

	_asl_put_32(r.pid, p);
	p += sizeof(uint32_t);

	_asl_put_32(r.uid, p);
	p += sizeof(uint32_t);

	_asl_put_32(r.gid, p);
	p += sizeof(uint32_t);

	_asl_put_32(r.ruid, p);
	p += sizeof(uint32_t);

	_asl_put_32(r.rgid, p);
	p += sizeof(uint32_t);

	_asl_put_32(r.refpid, p);
	p += sizeof(uint32_t);

	_asl_put_32(r.kvcount, p);
	p += sizeof(uint32_t);

	_asl_put_64(r.host, p);
	p += sizeof(uint64_t);

	_asl_put_64(r.sender, p);
	p += sizeof(uint64_t);

	_asl_put_64(r.facility, p);
	p += sizeof(uint64_t);

	_asl_put_64(r.message, p);
	p += sizeof(uint64_t);

	_asl_put_64(r.refproc, p);
	p += sizeof(uint64_t);

	_asl_put_64(r.session, p);
	p += sizeof(uint64_t);

	for (i = 0; i < r.kvcount; i++)
	{
		_asl_put_64(kvlist[i], p);
		p += sizeof(uint64_t);
	}

	_asl_put_64(r.prev, p);
	p += sizeof(uint64_t);

	free(kvlist);
	kvlist = NULL;

	if (status != 0) return ASL_STATUS_WRITE_FAILED;

	/* write record at end of file */
	status = fseeko(s->store, 0, SEEK_END);
	if (status != 0) return ASL_STATUS_WRITE_FAILED;

	s->last = (uint64_t)ftello(s->store);
	v = asl_core_htonq(s->last);

	status = fwrite(buf, len, 1, s->store);
	fflush(s->store);

	/* free the buffer if it was allocated here */
	if (buf != s->scratch) free(buf);

	/* seek to "next" field of previous record, write last offset */
	off = s->prev + RECORD_COMMON_LEN;
	if (s->prev == 0) off = DB_HEADER_FIRST_OFFSET;

	status = fseeko(s->store, off, SEEK_SET);
	if (status != 0) return ASL_STATUS_WRITE_FAILED;

	status = fwrite(&v, sizeof(uint64_t), 1, s->store);
	if (status != 1) return ASL_STATUS_WRITE_FAILED;

	/* seek to DB_HEADER_LAST_OFFSET, write last record offset */
	off = DB_HEADER_LAST_OFFSET;

	status = fseeko(s->store, off, SEEK_SET);
	if (status != 0) return ASL_STATUS_WRITE_FAILED;

	status = fwrite(&v, sizeof(uint64_t), 1, s->store);
	if (status != 1) return ASL_STATUS_WRITE_FAILED;

	/* return to the end of the store (this is expected by other routines) */
	status = fseeko(s->store, 0, SEEK_END);
	if (status != 0) return ASL_STATUS_WRITE_FAILED;

	s->prev = s->last;

	return ASL_STATUS_OK;
}

static uint32_t
asl_file_fetch_object(asl_file_t *s, uint64_t where, char **out)
{
	static char ils[9];
	char *p;
	uint32_t len;
	int status;
	uint64_t x64;
	uint8_t inls;
	uint16_t type;
	off_t off;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (out == NULL) return ASL_STATUS_INVALID_ARG;
	if (where == 0) return ASL_STATUS_INVALID_ARG;

	*out = NULL;

	inls = 0;
	x64 = asl_core_htonq(where);
	memcpy(&inls, &x64, 1);
	if (inls & 0x80)
	{
		/* inline string */
		memset(ils, 0, sizeof(ils));
		inls &= 0x0f;
		p = 1 + (char *)&x64;
		memcpy(ils, p, inls);
		*out = strdup(ils);

		if (*out == NULL) return ASL_STATUS_NO_MEMORY;
		return ASL_STATUS_OK;
	}

	off = where;
	status = fseeko(s->store, off, SEEK_SET);
	if (status != 0) return ASL_STATUS_READ_FAILED;

	/* Type */
	status = fread(&type, sizeof(uint16_t), 1, s->store);
	if (status != 1) return ASL_STATUS_READ_FAILED;

	/* Length */
	len = 0;
	status = fread(&len, sizeof(uint32_t), 1, s->store);
	if (status != 1) return ASL_STATUS_READ_FAILED;
	len = ntohl(len);

	*out = calloc(1, len);
	if (*out == NULL) return ASL_STATUS_NO_MEMORY;

	status = fread(*out, len, 1, s->store);
	if (status != 1)
	{
		free(*out);
		return ASL_STATUS_READ_FAILED;
	}

	return ASL_STATUS_OK;
}

static uint16_t
asl_file_fetch_helper_16(asl_file_t *s, char **p, aslmsg m, const char *key)
{
	uint16_t out;
	char str[256];

	out = _asl_get_16(*p);
	*p += sizeof(uint16_t);

	if ((m == NULL) || (key == NULL)) return out;

	snprintf(str, sizeof(str), "%hu", out);
	asl_set(m, key, str);

	return out;
}

static uint32_t
asl_file_fetch_helper_32(asl_file_t *s, char **p, aslmsg m, const char *key, int ignore, uint32_t ignoreval)
{
	uint32_t out, doit;
	char str[256];

	out = _asl_get_32(*p);
	*p += sizeof(uint32_t);

	if ((m == NULL) || (key == NULL)) return out;

	doit = 1;
	if ((ignore != 0) && (out == ignoreval)) doit = 0;
	if (doit != 0)
	{
		snprintf(str, sizeof(str), "%u", out);
		asl_set(m, key, str);
	}

	return out;
}

static uint64_t
asl_file_fetch_helper_64(asl_file_t *s, char **p, aslmsg m, const char *key)
{
	uint64_t out;
	char str[256];

	out = _asl_get_64(*p);
	*p += sizeof(uint64_t);

	if ((m == NULL) || (key == NULL)) return out;

	snprintf(str, sizeof(str), "%llu", out);
	asl_set(m, key, str);

	return out;
}

static uint64_t
asl_file_fetch_helper_str(asl_file_t *s, char **p, aslmsg m, const char *key)
{
	uint64_t out;
	char *val;
	uint32_t status;

	out = _asl_get_64(*p);
	*p += sizeof(uint64_t);

	val = NULL;
	status = asl_file_fetch_object(s, out, &val);
	if ((status == ASL_STATUS_OK) && (val != NULL))
	{
		asl_set(m, key, val);
		free(val);
	}

	return out;
}

static uint32_t
asl_file_fetch_pos(asl_file_t *s, uint64_t where, int dir, aslmsg *msg)
{
	char *buf, *p, *k, *v;
	file_record_t r;
	uint32_t i, status;
	uint64_t x64, kv;
	aslmsg out;
	off_t off;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (msg == NULL) return ASL_STATUS_INVALID_ARG;
	if ((s->flags & ASL_FILE_FLAG_READ_ONLY) == 0) return ASL_STATUS_WRITE_ONLY;

	buf = NULL;
	status = asl_file_fetch_object(s, where, &buf);
	if (buf == NULL) return status;

	out = asl_new(ASL_TYPE_MSG);
	if (out == NULL) return ASL_STATUS_NO_MEMORY;

	memset(&r, 0, sizeof(file_record_t));
	p = buf;

	r.next = asl_file_fetch_helper_64(s, &p, NULL, NULL);
	r.mid = asl_file_fetch_helper_64(s, &p, out, ASL_KEY_MSG_ID);
	r.time = asl_file_fetch_helper_64(s, &p, out, ASL_KEY_TIME);
	r.nano = asl_file_fetch_helper_32(s, &p, out, ASL_KEY_TIME_NSEC, 0, 0);
	r.level = asl_file_fetch_helper_16(s, &p, out, ASL_KEY_LEVEL);
	r.flags = asl_file_fetch_helper_16(s, &p, NULL, NULL);
	r.pid = asl_file_fetch_helper_32(s, &p, out, ASL_KEY_PID, 0, 0);
	r.uid = asl_file_fetch_helper_32(s, &p, out, ASL_KEY_UID, 1, (uint32_t)-1);
	r.gid = asl_file_fetch_helper_32(s, &p, out, ASL_KEY_GID, 1, (uint32_t)-1);
	r.ruid = asl_file_fetch_helper_32(s, &p, out, ASL_KEY_READ_UID, 1, (uint32_t)-1);
	r.rgid = asl_file_fetch_helper_32(s, &p, out, ASL_KEY_READ_GID, 1, (uint32_t)-1);
	r.refpid = asl_file_fetch_helper_32(s, &p, out, ASL_KEY_REF_PID, 1, 0);
	r.kvcount = asl_file_fetch_helper_32(s, &p, NULL, NULL, 0, 0);
	r.host = asl_file_fetch_helper_str(s, &p, out, ASL_KEY_HOST);
	r.sender = asl_file_fetch_helper_str(s, &p, out, ASL_KEY_SENDER);
	r.facility = asl_file_fetch_helper_str(s, &p, out, ASL_KEY_FACILITY);
	r.message = asl_file_fetch_helper_str(s, &p, out, ASL_KEY_MSG);
	r.refproc = asl_file_fetch_helper_str(s, &p, out, ASL_KEY_REF_PROC);
	r.session = asl_file_fetch_helper_str(s, &p, out, ASL_KEY_SESSION);

	for (i = 0; i < r.kvcount / 2; i++)
	{
		kv = _asl_get_64(p);
		p += sizeof(uint64_t);
		k = NULL;
		status = asl_file_fetch_object(s, kv, &k);

		kv = _asl_get_64(p);
		p += sizeof(uint64_t);
		v = NULL;
		status = asl_file_fetch_object(s, kv, &v);

		if ((status == ASL_STATUS_OK) && (k != NULL))
		{
			asl_set(out, k, v);
			if (v != NULL) free(v);
			free(k);
		}
	}

	r.prev = asl_file_fetch_helper_64(s, &p, NULL, NULL);

	free(buf);

	if (dir >= 0) s->cursor = r.next;
	else s->cursor = r.prev;

	s->cursor_xid = 0;

	if (s->cursor != 0)
	{
		off = s->cursor + RECORD_COMMON_LEN + sizeof(uint64_t);
		status = fseeko(s->store, off, SEEK_SET);
		if (status != 0) return ASL_STATUS_READ_FAILED;

		status = fread(&x64, sizeof(uint64_t), 1, s->store);
		if (status != 1) return ASL_STATUS_READ_FAILED;

		s->cursor_xid = asl_core_ntohq(x64);
	}

	*msg = out;
	return ASL_STATUS_OK;
}

uint32_t
asl_file_open_read(const char *path, asl_file_t **s)
{
	asl_file_t *out;
	FILE *f;
	int i;
	uint32_t status, vers;
	char buf[DB_HEADER_LEN];
	off_t off;
	asl_legacy1_t *legacy;

	f = fopen(path, "r");
	if (f == NULL)
	{
		if (errno == EACCES) return ASL_STATUS_ACCESS_DENIED;
		return ASL_STATUS_FAILED;
	}

	i = fread(buf, DB_HEADER_LEN, 1, f);
	if (i < 1)
	{
		fclose(f);
		return ASL_STATUS_INVALID_STORE;
	}

	/* validate header */
	if (strncmp(buf, ASL_DB_COOKIE, ASL_DB_COOKIE_LEN))
	{
		fclose(f);
		return ASL_STATUS_INVALID_STORE;
	}

	legacy = NULL;

	vers = _asl_get_32(buf + DB_HEADER_VERS_OFFSET);
	if (vers == DB_VERSION_LEGACY_1)
	{
		fclose(f);
		status = asl_legacy1_open(path, &legacy);
		if (status != ASL_STATUS_OK) return status;
	}

	out = (asl_file_t *)calloc(1, sizeof(asl_file_t));
	if (out == NULL)
	{
		fclose(f);
		return ASL_STATUS_NO_MEMORY;
	}

	out->flags = ASL_FILE_FLAG_READ_ONLY;
	out->version = vers;

	if (legacy != NULL)
	{
		out->flags |= ASL_FILE_FLAG_LEGACY_STORE;
		out->legacy = (void *)legacy;

		*s = out;
		return ASL_STATUS_OK;
	}

	out->first = _asl_get_64(buf + DB_HEADER_FIRST_OFFSET);
	out->last = _asl_get_64(buf + DB_HEADER_LAST_OFFSET);

	out->store = f;

	out->cursor = out->first;
	if (out->cursor != 0)
	{
		off = out->cursor + RECORD_COMMON_LEN + sizeof(uint64_t);
		status = asl_file_read_uint64(out, off, &(out->cursor_xid));
		if (status != ASL_STATUS_OK)
		{
			fclose(f);
			return status;
		}
	}

	*s = out;
	return ASL_STATUS_OK;
}

static uint32_t
asl_file_read_set_position_first(asl_file_t *s)
{
	uint32_t status;
	off_t off;

	s->cursor = s->first;
	s->cursor_xid = 0;

	if (s->cursor == 0) return ASL_STATUS_OK;

	/* read ID of the first record */
	off = s->cursor + RECORD_COMMON_LEN + sizeof(uint64_t);
	status = asl_file_read_uint64(s, off, &(s->cursor_xid));
	return status;
}

static uint32_t
asl_file_read_set_position_last(asl_file_t *s)
{
	uint64_t next;
	uint32_t status;
	off_t off;

	/*
	 * If the file has the offset of the last record, we just go there.
	 * The last record offset was added to improve performance, so it may
	 * or may not be there.  If we don't have the last record offset, we
	 * just iterate down the record links to find the last one.
	 *
	 * Note that s->last may be zero if the file is empty.
	 */

	if (s->last != 0)
	{
		s->cursor = s->last;
		off = s->last + RECORD_COMMON_LEN + sizeof(uint64_t);

		/* read ID of the last record */
		status = asl_file_read_uint64(s, off, &(s->cursor_xid));
		return status;
	}

	/* start at the first record and iterate */
	s->cursor = s->first;
	s->cursor_xid = 0;

	forever
	{
		off = s->cursor + RECORD_COMMON_LEN;
		next = 0;

		/* read next offset */
		status = asl_file_read_uint64(s, off, &next);
		if (status != ASL_STATUS_OK) return status;

		if (next == 0)
		{
			if (s->cursor == 0) return ASL_STATUS_OK;

			off = s->cursor + RECORD_COMMON_LEN + sizeof(uint64_t);
			status = asl_file_read_uint64(s, off, &(s->cursor_xid));
			return ASL_STATUS_OK;
		}

		s->cursor = next;
	}
}

uint32_t
asl_file_read_set_position(asl_file_t *s, uint32_t pos)
{
	uint32_t len, status;
	off_t off;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (s->version == 1) return ASL_STATUS_FAILED;

	if (pos == ASL_FILE_POSITION_FIRST) return asl_file_read_set_position_first(s);
	if (pos == ASL_FILE_POSITION_LAST) return asl_file_read_set_position_last(s);

	off = 0;

	if (pos == ASL_FILE_POSITION_PREVIOUS)
	{
		if (s->cursor == s->first) return ASL_STATUS_NO_RECORDS;
		if (s->cursor == 0) return ASL_STATUS_NO_RECORDS;

		off = s->cursor + RECORD_TYPE_LEN;
		status = asl_file_read_uint32(s, off, &len);
		if (status != ASL_STATUS_OK) return status;

		/* set offset to read the "previous" field at the end of the record */
		off = s->cursor + RECORD_COMMON_LEN + len - sizeof(uint64_t);
	}
	else if (pos == ASL_FILE_POSITION_NEXT)
	{
		if (s->cursor == s->last) return ASL_STATUS_NO_RECORDS;
		if (s->cursor == 0) return ASL_STATUS_NO_RECORDS;

		off = s->cursor + RECORD_COMMON_LEN;
	}
	else return ASL_STATUS_INVALID_ARG;

	s->cursor_xid = 0;

	/*
	 * read offset of next / previous
	 */
	status = asl_file_read_uint64(s, off, &(s->cursor));
	if (status != ASL_STATUS_OK) return ASL_STATUS_READ_FAILED;

	if (s->cursor == 0) return ASL_STATUS_NO_RECORDS;

	/* read ID of the record */
	off = s->cursor + RECORD_COMMON_LEN + sizeof(uint64_t);
	status = asl_file_read_uint64(s, off, &(s->cursor_xid));
	return status;
}

uint32_t
asl_file_fetch_next(asl_file_t *s, aslmsg *msg)
{
	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (s->version == 1) return ASL_STATUS_FAILED;

	return asl_file_fetch_pos(s, s->cursor, 1, msg);
}

uint32_t
asl_file_fetch_previous(asl_file_t *s, aslmsg *msg)
{
	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (s->version == 1) return ASL_STATUS_FAILED;

	return asl_file_fetch_pos(s, s->cursor, -1, msg);
}

uint32_t
asl_file_fetch(asl_file_t *s, uint64_t mid, aslmsg *msg)
{
	uint32_t status;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (msg == NULL) return ASL_STATUS_INVALID_ARG;
	if ((s->flags & ASL_FILE_FLAG_READ_ONLY) == 0) return ASL_STATUS_WRITE_ONLY;

	if (s->version == 1)
	{
		return asl_legacy1_fetch((asl_legacy1_t *)s->legacy, mid, msg);
	}

	if (s->cursor_xid == 0)
	{
		status = asl_file_read_set_position(s, ASL_FILE_POSITION_FIRST);
		if (status != ASL_STATUS_OK) return status;
		if (s->cursor_xid == 0) return ASL_STATUS_INVALID_ID;
	}

	while (s->cursor_xid < mid)
	{
		status = asl_file_read_set_position(s, ASL_FILE_POSITION_NEXT);
		if (status != ASL_STATUS_OK) return status;
		if (s->cursor_xid > mid) return ASL_STATUS_INVALID_ID;
		if (s->cursor_xid == 0) return ASL_STATUS_INVALID_ID;
	}

	while (s->cursor_xid > mid)
	{
		status = asl_file_read_set_position(s, ASL_FILE_POSITION_PREVIOUS);
		if (status != ASL_STATUS_OK) return status;
		if (s->cursor_xid < mid) return ASL_STATUS_INVALID_ID;
		if (s->cursor_xid == 0) return ASL_STATUS_INVALID_ID;
	}

	if (s->cursor_xid != mid) return ASL_STATUS_INVALID_ID;

	return asl_file_fetch_pos(s, s->cursor, 1, msg);
}

uint64_t
asl_file_cursor(asl_file_t *s)
{
	if (s == NULL) return 0;
	if ((s->flags & ASL_FILE_FLAG_READ_ONLY) == 0) return 0;
	if (s->version == 1) return 0;

	return s->cursor_xid;
}

uint32_t
asl_file_match_start(asl_file_t *s, uint64_t start_id, int32_t direction)
{
	uint32_t status, d;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (s->version == 1) return ASL_STATUS_INVALID_STORE;
	if ((s->flags & ASL_FILE_FLAG_READ_ONLY) == 0) return ASL_STATUS_WRITE_ONLY;

	d = ASL_FILE_POSITION_NEXT;
	if (direction < 0) d = ASL_FILE_POSITION_PREVIOUS;

	/*
	 * find starting point
	 */
	status = ASL_STATUS_OK;
	if (direction >= 0) status = asl_file_read_set_position(s, ASL_FILE_POSITION_FIRST);
	else status = asl_file_read_set_position(s, ASL_FILE_POSITION_LAST);
	if (status != ASL_STATUS_OK) return status;

	while ((status == ASL_STATUS_OK) && (((direction >= 0) && (s->cursor_xid < start_id)) || ((direction < 0) && (s->cursor_xid > start_id))))
	{
		status = asl_file_read_set_position(s, d);
	}

	return status;
}

uint32_t
asl_file_match_next(asl_file_t *s, aslresponse query, asl_msg_t **msg, uint64_t *last_id, int32_t direction)
{
	uint32_t status, d, i, do_match, did_match;
	aslmsg m;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (msg == NULL) return ASL_STATUS_INVALID_ARG;
	if (s->version == 1) return ASL_STATUS_INVALID_STORE;
	if ((s->flags & ASL_FILE_FLAG_READ_ONLY) == 0) return ASL_STATUS_WRITE_ONLY;
	if (s->cursor == 0) return ASL_STATUS_NO_RECORDS;

	*msg = NULL;
	do_match = 1;

	d = ASL_FILE_POSITION_NEXT;
	if (direction < 0) d = ASL_FILE_POSITION_PREVIOUS;

	if ((query == NULL) || ((query != NULL) && (query->count == 0))) do_match = 0;

	m = NULL;

	*last_id = s->cursor_xid;

	status = asl_file_fetch_pos(s, s->cursor, direction, &m);
	if (status == ASL_STATUS_ACCESS_DENIED) return ASL_STATUS_MATCH_FAILED;
	if ((status == ASL_STATUS_INVALID_ARG) && (s->cursor == 0)) return ASL_STATUS_NO_RECORDS;
	if (status != ASL_STATUS_OK) return status;

	did_match = 1;

	if (do_match != 0)
	{
		did_match = 0;

		for (i = 0; (i < query->count) && (did_match == 0); i++)
		{
			did_match = asl_msg_cmp(query->msg[i], m);
		}
	}

	if (did_match != 0)
	{
		*msg = m;
		return ASL_STATUS_OK;
	}

	asl_free(m);
	return ASL_STATUS_MATCH_FAILED;
}

uint32_t
asl_file_match(asl_file_t *s, aslresponse query, aslresponse *res, uint64_t *last_id, uint64_t start_id, uint32_t count, int32_t direction)
{
	uint32_t status, d, i, do_match, did_match, rescount;
	asl_msg_t *m;

	if (s == NULL) return ASL_STATUS_INVALID_STORE;
	if (res == NULL) return ASL_STATUS_INVALID_ARG;
	if ((s->flags & ASL_FILE_FLAG_READ_ONLY) == 0) return ASL_STATUS_WRITE_ONLY;

	if (s->version == 1)
	{
		return asl_legacy1_match((asl_legacy1_t *)s->legacy, query, res, last_id, start_id, count, direction);
	}

	do_match = 1;
	rescount = 0;

	d = ASL_FILE_POSITION_NEXT;
	if (direction < 0) d = ASL_FILE_POSITION_PREVIOUS;

	if ((query == NULL) || ((query != NULL) && (query->count == 0))) do_match = 0;

	/*
	 * find starting point
	 */
	status = ASL_STATUS_OK;
	if (direction >= 0) status = asl_file_read_set_position(s, ASL_FILE_POSITION_FIRST);
	else status = asl_file_read_set_position(s, ASL_FILE_POSITION_LAST);
	if (status != ASL_STATUS_OK) return status;

	while ((status == ASL_STATUS_OK) && (((direction >= 0) && (s->cursor_xid < start_id)) || ((direction < 0) && (s->cursor_xid > start_id))))
	{
		status = asl_file_read_set_position(s, d);
	}

	/* 
	 * loop through records
	 */
	forever
	{
		m = NULL;
		status = asl_file_fetch_pos(s, s->cursor, direction, &m);
		if (status == ASL_STATUS_ACCESS_DENIED) continue;
		if (status != ASL_STATUS_OK) break;

		*last_id = s->cursor_xid;

		did_match = 1;

		if (do_match != 0)
		{
			did_match = 0;

			for (i = 0; (i < query->count) && (did_match == 0); i++)
			{
				did_match = asl_msg_cmp(query->msg[i], m);
			}
		}

		if (did_match == 1)
		{
			/*  append m to res */
			if (*res == NULL)
			{
				*res = (aslresponse)calloc(1, sizeof(aslresponse));
				if (*res == NULL) return ASL_STATUS_NO_MEMORY;
				(*res)->msg = (asl_msg_t **)calloc(1, sizeof(asl_msg_t *));
				if ((*res)->msg == NULL)
				{
					free(*res);
					return ASL_STATUS_NO_MEMORY;
				}
			}
			else
			{
				(*res)->msg = (asl_msg_t **)realloc((*res)->msg, ((*res)->count + 1) * sizeof(asl_msg_t *));
				if ((*res)->msg == NULL)
				{
					free(*res);
					return ASL_STATUS_NO_MEMORY;
				}
			}

			(*res)->msg[(*res)->count] = m;
			(*res)->count++;

			rescount++;
			if ((count != 0) && (rescount >= count)) break;
		}
		else
		{
			asl_free(m);
		}
	}

	/* NOT REACHED */
	return ASL_STATUS_OK;
}

size_t
asl_file_size(asl_file_t *s)
{
	if (s == NULL) return 0;
	return s->file_size;
}

uint64_t
asl_file_ctime(asl_file_t *s)
{
	if (s == NULL) return 0;
	return s->dob;
}

void
asl_file_list_close(asl_file_list_t *head)
{
	asl_file_list_t *next;

	while (head != NULL)
	{
		next = head->next;
		asl_file_close(head->file);
		free(head);
		head = next;
	}
}

static void
asl_file_list_free(asl_file_list_t *head)
{
	asl_file_list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

asl_file_list_t *
asl_file_list_insert(asl_file_list_t *list, asl_file_t *f, int32_t dir)
{
	asl_file_list_t *a, *b, *tmp;

	if (f == NULL) return list;

	tmp = (asl_file_list_t *)calloc(1, sizeof(asl_file_list_t));
	if (tmp == NULL) return NULL;
	tmp->file = f;

	if (list == NULL) return tmp;

	a = list;
	if (((dir < 0) && (f->cursor_xid > a->file->cursor_xid)) || ((dir >= 0) && (f->cursor_xid < a->file->cursor_xid)))
	{
		tmp->next = list;
		return tmp;
	}

	b = a->next;
	while (b != NULL)
	{
		if (((dir < 0) && (f->cursor_xid > b->file->cursor_xid)) || ((dir >= 0) && (f->cursor_xid < b->file->cursor_xid)))
		{
			tmp->next = b;
			a->next = tmp;
			return list;
		}

		a = b;
		b = a->next;
	}

	a->next = tmp;
	return list;
}

asl_file_list_t *
asl_file_list_add(asl_file_list_t *list, asl_file_t *f)
{
	asl_file_list_t *tmp;

	if (f == NULL) return list;
	if (f->version == 1) return list;

	tmp = (asl_file_list_t *)calloc(1, sizeof(asl_file_list_t));
	if (tmp == NULL) return NULL;
	tmp->file = f;

	tmp->next = list;
	return tmp;
}

void *
asl_file_list_match_start(asl_file_list_t *list, uint64_t start_id, int32_t direction)
{
	uint32_t status;
	asl_file_list_t *n;
	asl_file_match_token_t *out;

	if (list == NULL) return NULL;

	out = (asl_file_match_token_t *)calloc(1, sizeof(asl_file_match_token_t));
	if (out == NULL) return NULL;

	for (n = list; n != NULL; n = n->next)
	{
		/* init file for the search */
		status = asl_file_match_start(n->file, start_id, direction);
		if (status != ASL_STATUS_OK) continue;
		if (n->file->cursor_xid == 0) continue;

		out->list = asl_file_list_insert(out->list, n->file, direction);
	}

	out->dir = direction;
	return out;
}

uint32_t
asl_file_list_match_next(void *token, aslresponse query, aslresponse *res, uint32_t count)
{
	uint32_t status, rescount;
	asl_file_list_t *n;
	asl_msg_t *m;
	asl_file_match_token_t *work;
	uint64_t last_id;

	if (token == NULL) return ASL_STATUS_OK;
	if (res == NULL) return ASL_STATUS_INVALID_ARG;

	work = (asl_file_match_token_t *)token;

	rescount = 0;
	last_id = 0;

	while ((work->list != NULL) && ((rescount < count) || (count == 0)))
	{
		m = NULL;
		status = asl_file_match_next(work->list->file, query, &m, &last_id, work->dir);
		if (m != NULL)
		{
			if (*res == NULL) *res = (aslresponse)calloc(1, sizeof(asl_search_result_t));
			if (*res == NULL)
			{
				asl_file_list_free(work->list);
				work->list = NULL;
				return ASL_STATUS_NO_MEMORY;
			}

			if ((*res)->msg == NULL) (*res)->msg = (asl_msg_t **)calloc(1, sizeof(asl_msg_t *));
			else (*res)->msg = (asl_msg_t **)reallocf((*res)->msg, ((*res)->count + 1) * sizeof(asl_msg_t *));
			if ((*res)->msg == NULL)
			{
				free(*res);
				*res = NULL;
				asl_file_list_free(work->list);
				work->list = NULL;
				return ASL_STATUS_NO_MEMORY;
			}

			(*res)->msg[(*res)->count] = m;
			(*res)->count++;
			rescount++;
		}

		if (work->list->file->cursor_xid == 0)
		{
			n = work->list->next;
			free(work->list);
			work->list = n;
		}

		if (work->list != NULL)
		{
			n = work->list->next;
			if (n != NULL)
			{
				if (((work->dir < 0) && (work->list->file->cursor_xid <= n->file->cursor_xid)) || ((work->dir >= 0) && (work->list->file->cursor_xid > n->file->cursor_xid)))
				{
					n = work->list;
					work->list = work->list->next;
					n->next = NULL;
					work->list = asl_file_list_insert(work->list, n->file, work->dir);
					free(n);
				}
			}
		}
	}

	return ASL_STATUS_OK;
}

void
asl_file_list_match_end(void *token)
{
	asl_file_match_token_t *work;

	if (token == NULL) return;

	work = (asl_file_match_token_t *)token;
	asl_file_list_free(work->list);
	work->list = NULL;

	free(token);
}

uint32_t
asl_file_list_match_timeout(asl_file_list_t *list, aslresponse query, aslresponse *res, uint64_t *last_id, uint64_t start_id, uint32_t count, int32_t direction, uint32_t usec)
{
	uint32_t status, rescount;
	asl_file_list_t *files, *n;
	asl_msg_t *m;
	struct timeval now, finish;

	if (list == NULL) return ASL_STATUS_INVALID_ARG;
	if (res == NULL) return ASL_STATUS_INVALID_ARG;
	if (last_id == NULL) return ASL_STATUS_INVALID_ARG;

	files = NULL;

	for (n = list; n != NULL; n = n->next)
	{
		/* init file for the search */
		status = asl_file_match_start(n->file, start_id, direction);
		if (status != ASL_STATUS_OK) continue;
		if (n->file->cursor_xid == 0) continue;

		files = asl_file_list_insert(files, n->file, direction);
	}

	if (files == NULL)
	{
		asl_file_list_free(files);
		return ASL_STATUS_OK;
	}

	/* start the timer if a timeout was specified */
	memset(&finish, 0, sizeof(struct timeval));
	if (usec != 0)
	{
		if (gettimeofday(&finish, NULL) == 0)
		{
			finish.tv_sec += (usec / MILLION);
			finish.tv_usec += (usec % MILLION);
			if (finish.tv_usec > MILLION)
			{
				finish.tv_usec -= MILLION;
				finish.tv_sec += 1;
			}
		}
		else
		{
			/* shouldn't happen, but if gettimeofday failed we just run without a timeout */
			memset(&finish, 0, sizeof(struct timeval));
		}
	}

	rescount = 0;
	while ((files != NULL) && ((rescount < count) || (count == 0)))
	{
		m = NULL;
		status = asl_file_match_next(files->file, query, &m, last_id, direction);
		if (m != NULL)
		{
			if (*res == NULL) *res = (aslresponse)calloc(1, sizeof(asl_search_result_t));
			if (*res == NULL)
			{
				asl_file_list_free(files);
				return ASL_STATUS_NO_MEMORY;
			}

			if ((*res)->msg == NULL) (*res)->msg = (asl_msg_t **)calloc(1, sizeof(asl_msg_t *));
			else (*res)->msg = (asl_msg_t **)reallocf((*res)->msg, ((*res)->count + 1) * sizeof(asl_msg_t *));
			if ((*res)->msg == NULL)
			{
				free(*res);
				*res = NULL;
				asl_file_list_free(files);
				return ASL_STATUS_NO_MEMORY;
			}

			(*res)->msg[(*res)->count] = m;
			(*res)->count++;
			rescount++;
		}

		if (files->file->cursor_xid == 0)
		{
			n = files->next;
			free(files);
			files = n;
		}

		if (files != NULL)
		{
			n = files->next;
			if (n != NULL)
			{
				if (((direction < 0) && (files->file->cursor_xid <= n->file->cursor_xid)) || ((direction >= 0) && (files->file->cursor_xid > n->file->cursor_xid)))
				{
					n = files;
					files = files->next;
					n->next = NULL;
					files = asl_file_list_insert(files, n->file, direction);
					free(n);
				}
			}
		}

		/* check the timer */
		if ((finish.tv_sec != 0) && (gettimeofday(&now, NULL) == 0))
		{
			if ((now.tv_sec > finish.tv_sec) || ((now.tv_sec == finish.tv_sec) && (now.tv_usec > finish.tv_usec))) break;
		}
	}

	asl_file_list_free(files);
	return ASL_STATUS_OK;
}

uint32_t
asl_file_list_match(asl_file_list_t *list, aslresponse query, aslresponse *res, uint64_t *last_id, uint64_t start_id, uint32_t count, int32_t direction)
{
	return asl_file_list_match_timeout(list, query, res, last_id, start_id, count, direction, 0);
}
