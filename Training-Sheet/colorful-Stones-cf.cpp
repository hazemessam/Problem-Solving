#include<iostream>
using namespace std;
int main()
{
    string ston, strn;
    int stand=0;
    cin>> ston >> strn;
    for(int i=0 ; i<strn.length() ;i++)
        if(strn[i] == ston[stand] && stand < ston.length()-1)
            stand++;
    cout<< stand + 1 <<endl;
}