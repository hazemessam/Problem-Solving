#include <stdio.h>
#include <math.h>
#include <cs50.h>
int main(void)
{
    float d;
    int counter = 0;
    do
    {
        d = get_float("Change owed: ");
    } while (d < 0);
    int c = round(d * 100);
    while (c != 0)
    {
        if (c >= 25)
        {
            c -= 25;
        }
        else if (c >= 10)
        {
            c -= 10;
        }
        else if (c >= 5)
        {
            c -= 5;
        }
        else
        {
            c -= 1;
        }
        counter++;
    }
    printf("%i\n", counter);
}