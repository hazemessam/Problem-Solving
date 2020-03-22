#include<iostream>
using namespace std;
int main()
{
    string stones;
    int size, counter=0;
    cin>> size;
    cin>> stones;
    for(int i=0 ; i<stones.length()-1 ; i++)
        if(stones[i] == stones[i+1])
            counter++;
    cout<< counter <<endl;