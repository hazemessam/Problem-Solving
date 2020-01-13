#include<iostream>
using namespace std;
int main()
{
    int cals[4], counter=0;
    string s;
    for(int i=0; i<4 ; i++)
        cin>> cals[i];
    cin>> s;    
    for (int i=0; i<s.length(); i++)
        if(s[i] == '1')
            counter+=cals[0];
        else if(s[i] == '2')
            counter+=cals[1];
        else if(s[i] == '3')
            counter+=cals[2];
        else if(s[i] == '4')
            counter+=cals[3];
    cout<< counter <<endl;
}