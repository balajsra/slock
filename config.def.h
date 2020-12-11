/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT]   = "black",  /* after initialization */
	[INPUT]  = "purple", /* during input */
	[FAILED] = "red",    /* wrong password */
	[CAPS]   = "cyan",   /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 0;

/* default message */
static const char * message = "Display Locked with Slock";

/* text color */
static const char * text_color = "white";

/* text size (must be a valid size) */
static const char * font_name = "lucidasans-bold-24";
