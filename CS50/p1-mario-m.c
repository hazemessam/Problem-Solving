#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;
    do
    {
        h = get_int("Height: ");
    } while (h < 1 || h > 8);

    for (int l = 1; l <= h; l++)
    {
        int sNum = h - l;
        for (int s = 0; s < sNum; s++)
        {
            printf(" ");
        }
        for (int i = 0; i < l; i++)
        {
            printf("#");
        }
        printf("  ");
        for (int i = 0; i < l; i++)
        {
            printf("#");
        }
        printf("\n");
    }
}