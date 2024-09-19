static const char *const multilib_raw[] = {
". !m64;",
"ppc64 m64;",
NULL
};

static const char *const multilib_matches_raw[] = {
"m64 m64;",
NULL
};

static const char *multilib_extra = "/Developer/SDKs/MacOSX10.4u.sdk mmacosx-version-min=10.4";

static const char *const multilib_exclusions_raw[] = {
NULL
};

static const char *multilib_options = "m64";
