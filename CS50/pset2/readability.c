#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int main(void)
{
    int l = 0, w = 0, s = 0;
    char head, nextHead;
    bool firstWord = true;
    string text = get_string("Text: ");
    int n = strlen(text);
    for (int i = 0 ; i < n ; i++)
    {
        head = text[i];
        nextHead = text[i + 1];
        if (isupper(head) || islower(head))
        {
            l++;
            if (nextHead == '.' || nextHead == '!' || nextHead == '?')
            {
                s++;
            }
            if (firstWord)
            {
                w++;
                firstWord = false;
            }
        }
        else if (isspace(head) && (isalpha(nextHead) || nextHead == '\"'))
        {
            w++;
        }
    }
    if (s == 0)
    {
        s++;
    }
    printf("L: %i\nW: %i\nS: %i\n", l, w, s);
    float L = (l / (float)w) * 100;
    float S = (s / (float)w) * 100;
    int index = round(0.0588 * L - 0.296 * S - 15.8);
    if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}