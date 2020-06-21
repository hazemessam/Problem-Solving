#include<iostream>
using namespace std;
int main()
{
    int arr[3], max;
    for(int i=0 ; i<3 ; i++)
        cin>> arr[i];
    for(int i=0 ; i<3 ; i++)
        if(i == 0)
            max = arr[i];
        else if(arr[i] > max)
            max = arr[i];
    cout<< max << " eh o maior" <<endl;
}