#include<iostream>
using namespace std;
int main()
{
    string str;
    int upper=0, lower=0;
    cin>> str;
    for(int i=0 ; i<str.length() ; i++)
        if( isupper(str[i]) )
            upper++;
        else
            lower++;
    if(lower >= upper)
        for(int i=0 ; i<str.length() ; i++)
            str[i] = tolower(str[i]);
    else
        for(int i=0 ; i<str.length() ; i++)
            str[i] = toupper(str[i]);
    cout<< str <<endl;
}