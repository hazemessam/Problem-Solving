#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int d, m=0, y=0;
    cin>> d;
    while(d >= 30)
    {
        if(d >= 365)
        {
            d-=365;
            y++;
        }
        else if(d >= 30)
        {
            d-=30;
            m++;
        }
    }
    printf("%i ano(s)\n", y);
    printf("%i mes(es)\n", m);
    printf("%i dia(s)\n", d);
}