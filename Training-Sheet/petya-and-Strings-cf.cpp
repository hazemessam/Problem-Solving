#include<iostream>
using namespace std;
int main()
{
    string s1="hh", s2="lk";
    cin>> s1;
    cin>> s2;
    for(int i=0 ; i<s1.length() ; i++)
    {
        s1[i] = toupper(s1[i]);
        s2[i] = toupper(s2[i]);
    }
    if(s1 > s2)
        cout<< 1 <<endl;
    else if(s1 < s2)
        cout<< -1 <<endl;
    else
        cout<< 0 <<endl;
}
