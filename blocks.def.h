//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"  ", "~/.local/src/suckless/dwmblocks/scripts/update", 1000, 0},

	{"  ", "~/.local/src/suckless/dwmblocks/scripts/cpu_usage", 2, 0},

	{"  ", "~/.local/src/suckless/dwmblocks/scripts/cpu_temp", 2, 0},

	{"  ", "~/.local/src/suckless/dwmblocks/scripts/memory", 2, 0},

	{"  ", "~/.local/src/suckless/dwmblocks/scripts/disk", 60, 0},

	{"  ", "~/.local/src/suckless/dwmblocks/scripts/battery", 6, 0},

	{"  ", "~/.local/src/suckless/dwmblocks/scripts/uptime", 30, 0},

    {"  ", "uname -r", 0, 0},

	{"  ", "~/.local/src/suckless/dwmblocks/scripts/timedate", 10, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
