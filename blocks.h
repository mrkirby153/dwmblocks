//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
    /*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    // {"", "cat ~/.pacupdate | sed /📦0/d",					0,		9},
    
    // {"🧠", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

    // {"", "~/bin/statusbar/volume",						0,		10},

    // {"☀", "xbacklight | sed 's/\\..*//'",					0,		11},
    
    // {"", "~/bin/statusbar/battery",						5,		0},

    // {"🌡", "sensors | awk '/^temp1:/{print $2}'",				5,		0},

    // {"", "~/bin/statusbar/clock",						5,		0},
    {"", "~/.local/bin/statusbar/music", 1, 2},
    {"", "~/.local/bin/statusbar/memory", 30, 3},
    {"", "~/.local/bin/statusbar/cpu", 3, 4},
    {"", "~/.local/bin/statusbar/gpu", 3, 8},
    {"", "~/.local/bin/statusbar/clock", 10, 5},
    {"", "~/.local/bin/statusbar/mail", 10, 6},
    {"", "~/.local/bin/statusbar/volume", 0, 10},
    {"", "~/.local/bin/statusbar/updates", 60, 9 },
    {"", "~/.local/bin/statusbar/mouse_battery", 30, 8},
    {"", "~/.local/bin/statusbar/indicator_keys", 3, 11},
    {"", "~/.local/bin/statusbar/internet", 30, 7},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " | ";
