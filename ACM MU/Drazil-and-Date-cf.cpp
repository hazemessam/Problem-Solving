#include<iostream>
using namespace std;

int pos(int a)
{
    if(a<0)
        return 0-a;
    else
        return a;
}

int main()
{
    long long x, y, s;
    cin>> x >> y >> s;
    x = pos(x);
    y = pos(y);
    if(x+y == s || x+y < s && s%2 == 0 || x == 0 && y == 0 && s%2 ==0)
        cout<< "YES" <<endl;
    else
        cout<< "NO" <<endl;
}