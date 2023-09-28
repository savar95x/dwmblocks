//Modify this file to change what commands output to your statusbar, and recompile using the make command.

#define RED "#d97873"
#define GREEN "#9fab62"
// #9fab62 #a5b06b
#define YELLOW "#c8a267"
// #cda462 #c8a267
#define BLUE "#81aaa1"
#define MAGENTA "#cd8c9e"
#define CYAN "#8daf87"
#define FG "#BDAE93"

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	//{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},

	{"", "echo ^c" GREEN "^$($HOME/.local/scripts/sb_audio icon) ^c" FG "^$(pamixer --get-volume)",					0,		10},
	{"", "echo \"^c" RED "^$($HOME/.local/scripts/sb_battery icon) ^c" FG "^$($HOME/.local/scripts/sb_battery perc)\"",					30,		0},
	{"", "echo ^c" YELLOW "^ ^c" FG "^$(date '+%I:%M%p')",					5,		0},
	{"", "echo \"^c" BLUE "^ ^c" FG "^$(date '+%b %d (%a) %Y') \"",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
