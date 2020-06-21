#include<iostream>
using namespace std;
int main()
{
    int h=0, m=0, s;
    cin>> s;
    while(true)
        if(s >= 60*60)
        {
            s-=60*60;
            h++;
        }
        else if(s >= 60 )
        {
            s-=60;
            m++;
        }
        else
            break;
        
    printf("%i:%i:%i\n", h, m, s);
}