#include<iostream>
using namespace std;
int main()
{
    int p, c, n=1;
    cin>> p >> c;
    while(true)
        if((n*p)%10 == 0 || (n*p-c)%10 == 0)
            break;
        else
            n++;
    cout<< n <<endl;
}