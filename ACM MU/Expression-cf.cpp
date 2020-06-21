#include<iostream>
using namespace std;
int main()
{
    int a, b, c, arr[6], max;
    cin>> a >> b >> c;
    arr[0] = a+b*c;
    arr[1] = (a+b)*c;
    arr[2] = a*b+c;
    arr[3] = a*(b+c);
    arr[4] = a*b*c;
    arr[5] = a+b+c;
    for(int i=0 ; i<6 ; i++)
        if(i == 0)
        {
            max = arr[i];
            continue;
        }
        else
            if(arr[i] > max)
                max = arr[i];
    cout<< max <<endl;
}