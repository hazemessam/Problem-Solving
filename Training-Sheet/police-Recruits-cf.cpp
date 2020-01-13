#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size, officers=0, crimes=0;
    cin>> size;
    vector<int> events(size);
    for(int i=0 ; i<size ; i++)
        cin>> events[i];
    for(int i=0 ; i<size ; i++)
        if(events[i] > 0)
            officers+=events[i];
        else if(events[i] < 0)
            if(officers>0)
                officers--;
            else
                crimes++;        
    cout<< crimes <<endl;
}