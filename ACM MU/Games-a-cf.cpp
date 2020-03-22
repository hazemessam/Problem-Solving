#include <iostream>
using namespace std;

int main()
{
    int n, counter = 0;
    cin>> n;
    int arr[n][2];
    for(int row = 0; row < n; row++)
        for(int col = 0; col < 2 ; col++)
            cin>> arr[row][col];
    for(int c1_row = 0; c1_row < n; c1_row++)
        for(int c2_row = 0; c2_row < n; c2_row++)
            if(arr[c1_row][0] == arr[c2_row][1])
                counter++;
    cout<< counter <<endl;
}