#include<iostream>
using namespace std;
int main()
{
    int n, x, counter=0, sub_counter=0; 
    cin >> n;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<3 ; j++)
        {
            cin >> x;
            if(x == 1)
                sub_counter++;
        }
        if(sub_counter >= 2)
            counter++;
        sub_counter = 0;
    }
    cout<< counter <<endl;
}