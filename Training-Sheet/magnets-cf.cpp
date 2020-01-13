#include<iostream>
using namespace std;
int main()
{
    int size, groups=1;
    string mag, temp;
    cin>> size;
    for(int i=0 ; i<size ; i++)
    {
        cin>> mag;
        if(i==0)
        {
            temp = mag;
            continue;
        }
        if(mag[0] == temp[1])
            groups++;
        temp = mag;
    }
    cout<< groups <<endl;
}