#include <stdio.h>

// printf ANSI macros
#define COLOR_RESET     "\x1b[0m"
#define COLOR_BRIGHT    "\x1b[1m"
#define COLOR_FAINT     "\x1b[2m"
#define COLOR_FG_BLACK     "\x1b[30m"
#define COLOR_FG_RED       "\x1b[31m"
#define COLOR_FG_GREEN     "\x1b[32m"
#define COLOR_FG_YELLOW    "\x1b[33m"
#define COLOR_FG_BLUE      "\x1b[34m"
#define COLOR_FG_MAGENTA   "\x1b[35m"
#define COLOR_FG_CYAN      "\x1b[36m"
#define COLOR_FG_WHITE     "\x1b[37m"

int main()
{
    printf(COLOR_FG_RED);
    printf("asdf");
    printf(COLOR_FG_GREEN);
    printf("more");
    printf(COLOR_BRIGHT);
    printf("stuff\n");
    printf(COLOR_RESET);
}
