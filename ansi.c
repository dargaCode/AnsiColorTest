#include <stdio.h>
#include <cs50.h>

// printf ANSI macros
#define COLOR_RESET   "\x1b[0m"

int main()
{
    printf("\n");

    int weight[] = {2, 22, 1};

    // foreground color
    for (int i = 0; i <= 7; i++)
    {
        // weight
        for (int j = 0; j < 3; j++)
        {
            printf("    ");
            //background color
            for (int k = 0; k <= 7; k++)
            {
                printf("\x1b[3%i;4%i;%im", i, k, weight[j]);
                printf(" TEST ");
                printf(COLOR_RESET);
            }
            printf("\n");
        }
        printf("\n");
    }
}
