#include <iostream>
using namespace std;
int main()
{
    int size, counter=0;
    cin>> size;
    int arr[size][2];
    for(int row=0 ; row<size ; row++)
        for(int col=0 ; col<2 ; col++)
            cin>> arr[row][col];
    for(int row1=0 ; row1<size ; row1++)
        for(int row2=0 ; row2<size ; row2++)
            if(arr[row1][0] == arr[row2][1] && row1 != row2)
                counter++;
    cout<< counter <<endl;
}