/*
    AMEX ----------> 15 starts with 34 or 37
    MasterCard --> 16 starts with 51, 52, 53, 54, or 55
    Visa --------> 13 or 16 starts with 4
*/
#include <stdio.h>
#include <cs50.h>


int num_of_digits(long n);
int checksum(long n);
long power(int n, int p);
int first_n_dgts(int n, long num);


int main(void)
{
    long num = get_long("Number: ");
    int f_1_dgt = first_n_dgts(1, num);
    int f_2_dgt = first_n_dgts(2, num);
    int num_of_dgt = num_of_digits(num);
    if (num_of_dgt == 15 && (f_2_dgt == 34 || f_2_dgt == 37) && checksum(num))
    {
        printf("AMEX\n");
    }
    else if (num_of_dgt == 16 && (f_2_dgt == 51 || f_2_dgt == 52 || f_2_dgt == 53 || f_2_dgt == 54 || f_2_dgt == 55) && checksum(num))
    {
        printf("MASTERCARD\n");
    }
    else if ((num_of_dgt == 13 || num_of_dgt == 16) && f_1_dgt == 4 && checksum(num))
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }
}


int num_of_digits(long n)
{
    int counter = 0;
    while (n > 0)
    {
        n /= 10;
        counter++;
    }
    return counter;
}

int checksum(long n)
{
    int digits = num_of_digits(n);
    int mul_group = 0, nor_group = 0;
    long m = 10, d = 1;
    for (int i = 0; i < digits; i++, m *= 10, d *= 10)
    {
        int head = n % m / d;
        if (i % 2 == 0)
        {
            nor_group += head;
        }
        else
        {
            int temp = head * 2;
            mul_group += temp % 10;
            mul_group += temp / 10;
        }
    }
    int total_sum = mul_group + nor_group;
    int first_dgt = total_sum % 10;
    if (first_dgt == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

long power(int n, int p)
{
    if (p == 1)
    {
        return n;
    }
    return power(n, p - 1) * power(n, 1);
}

int first_n_dgts(int n, long num)
{
    int digits = num_of_digits(num);
    int target = num / power(10, digits - n);
    return target;
}