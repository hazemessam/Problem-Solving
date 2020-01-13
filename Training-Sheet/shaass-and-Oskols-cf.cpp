#include<iostream>
using namespace std;
int main()
{
    int w, s, l, index;
    cin>> w;
    int s_per_w[w];
    for(int i=0 ; i<w ; i++)
        cin>> s_per_w[i];
    cin>> s;
    for(int i=0 ; i<s ; i++)
    {
        cin>> l >> index;
        l-=1;
        s_per_w[l-1] += index-1;
        s_per_w[l+1] += s_per_w[l]-index;
        s_per_w[l] = 0;
    }
    for(int i=0 ; i<w ; i++)
        cout<< s_per_w[i]<<endl;
}