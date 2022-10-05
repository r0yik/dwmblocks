//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"UD:", "~/.local/src/suckless/dwmblocks/scripts/update", 1000, 0},

	{"CPU:", "~/.local/src/suckless/dwmblocks/scripts/cpu_usage", 5, 0},
    
	{"CPU_Temp:", "~/.local/src/suckless/dwmblocks/scripts/cpu_temp", 5, 0},

	{"Mem:", "~/.local/src/suckless/dwmblocks/scripts/memory", 5, 0},

	{"Disk:", "~/.local/src/suckless/dwmblocks/scripts/disk", 60, 0},

	{"Bat:", "~/.local/src/suckless/dwmblocks/scripts/battery", 5, 0},
    
	{"", "~/.local/src/suckless/dwmblocks/scripts/timedate", 5, 0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
