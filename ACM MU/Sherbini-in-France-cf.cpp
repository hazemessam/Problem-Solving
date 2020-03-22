#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    for(int i =0 ; i<s.length() ; i++)
        if(s[i] == 'r' || s[i] == 'R')
            s[i] = '8';
    cout<< s <<endl;
}