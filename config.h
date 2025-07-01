#ifndef CONFIG_H
#define CONFIG_H

// String used to delimit block outputs in the status.
#define DELIMITER "  "

// Maximum number of Unicode characters that a block can output.
#define MAX_BLOCK_OUTPUT_LENGTH 200

// Control whether blocks are clickable.
// Make sure signal>0 even if just for clickable
#define CLICKABLE_BLOCKS 1

// Control whether a leading delimiter should be prepended to the status.
#define LEADING_DELIMITER 0

// Control whether a trailing delimiter should be appended to the status.
#define TRAILING_DELIMITER 0

// Define blocks for the status feed as X(icon, cmd, interval, signal).
#define BLOCKS(X)             \
    X("", "~/.config/dwm/scripts/music.sh", 5, 1) \
    X("", "~/.config/dwm/scripts/light.sh", 0, 13) \
    X("", "~/.config/dwm/scripts/audio.sh", 0, 10) \
    X("", "~/.config/dwm/scripts/battery.sh", 0, 12) \
    X("", "~/.config/dwm/scripts/wifi.sh", 30, 16) \
    X("", "~/.config/dwm/scripts/date.sh", 60, 17)


#endif  // CONFIG_H
