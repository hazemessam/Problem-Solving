#include<iostream>
using namespace std;
int main()
{
    int n, h, x, w = 0;
    cin >> n;
    cin >> h;
    for(int i=1 ; i<=n ; i++)
    {
        cin >> x;
        if(x>h)
            w++;
        w++;
    }
    cout<<w<<endl;
}