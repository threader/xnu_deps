#include <dev/busvar.h>


extern pty_init();
extern vndevice_init();
extern mdevinit();
extern bpf_init();
extern fsevents_init();
extern random_init();

struct pseudo_init pseudo_inits[] = {
	128,	pty_init,
	4,	vndevice_init,
	1,	mdevinit,
	4,	bpf_init,
	1,	fsevents_init,
	1,	random_init,
	0,	0,
};
