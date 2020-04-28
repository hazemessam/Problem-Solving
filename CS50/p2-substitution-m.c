#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int test_alpha(string str);
int test_uniqe(string str);
void upper_str(string str);


int main(int argc, string argv[])
{
    if (argc < 2 || argc > 2)
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    string key = argv[1];
    if (strlen(key) != 26)
    {
        printf("Key must contain 26 characters.\n");
        return 1;
    }
    else if (test_alpha(key))
    {
        printf("Not key\n");
        return 1;
    }
    else if (test_uniqe(key))
    {
        printf("Repeated char\n");
        return 1;
    }
    else
    {
        int n, index;
        string plaintext = get_string("plaintext: ");
        n = strlen(plaintext);
        char ciphertext[n];
        upper_str(key);
        for (int i = 0 ; i < n ; i++)
        {
            if (isalpha(plaintext[i]))
            {
                if (islower(plaintext[i]))
                {

                    plaintext[i] = toupper(plaintext[i]);
                    index = plaintext[i] - 65;
                    ciphertext[i] = tolower(key[index]);
                }
                else
                {
                    index = plaintext[i] - 65;
                    ciphertext[i] = key[index];
                }
            }
            else
            {
                ciphertext[i] = plaintext[i];
            }
        }
        printf("ciphertext: ");
        for (int i = 0 ; i < n ; i++)
        {
            printf("%c", ciphertext[i]);
        }
        printf("\n");
        return 0;
    }
}


int test_alpha(string str)
{
    for (int i = 0, n = strlen(str) ; i < n ; i++)
    {
        if (!isalpha(str[i]))
        {
            return 1;
        }
    }
    return 0;
}

void selection_sort(string str)
{
    for (int i = 0, n = strlen(str) ; i < n - 1 ; i++)
    {
        for (int j = i + 1 ; j < n ; j++)
        {
            if (str[i] > str[j])
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

void upper_str(string str)
{
    for (int i = 0, n = strlen(str) ; i < n ; i++)
    {
        str[i] = toupper(str[i]);
    }
}

int test_uniqe(string str)
{
    int n = strlen(str);
    char cstr[n];
    strcpy(cstr, str);
    upper_str(cstr);
    selection_sort(cstr);
    for (int i = 0 ; i < n - 1 ; i++)
    {
        if (cstr[i] == cstr[i + 1])
        {
            return 1;
        }
    }
    return 0;
}
