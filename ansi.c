#include <stdio.h>

// printf ANSI macros
#define COLOR_BRIGHT    "\x1b[1m"
#define COLOR_FAINT     "\x1b[2m"
#define COLOR_RESET     "\x1b[0m"
#define COLOR_BLACK
#define COLOR_RED
#define COLOR_GREEN
#define COLOR_YELLOW
#define COLOR_BLUE
#define COLOR_MAGENTA
#define COLOR_CYAN
#define COLOR_WHITE

int main()
{
    printf("sup\n");
    printf(COLOR_FAINT);
    printf("sup\n");
    printf(COLOR_BRIGHT);
    printf("sup\n");
    printf(COLOR_RESET);
}
