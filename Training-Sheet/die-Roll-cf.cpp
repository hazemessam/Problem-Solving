#include<iostream>
using namespace std;
int max(int x, int y)
{
    if(x >= y)
        return x;
    else
        return y;
}
int main()
{
    int y, w, d, a, b=6;
    cin>> y >> w;
    d = 6 - max(y, w) +1;
    a = d;
    for(int i=6 ; i>1 ; i--)
        if(a%i == 0 && b%i == 0)
        {
            a/=i;
            b/=i;
        }
    cout<< a << '/' << b <<endl;
}