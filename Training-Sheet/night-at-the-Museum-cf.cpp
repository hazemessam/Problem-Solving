#include<iostream>
using namespace std;
int steps=0;
void calc_steps(char pointer, char target)
{
    int m1 = abs(target-pointer);
    int m2 = abs(26-m1);
    if(m1 <= m2)
        steps+=m1;
    else
        steps+=m2;
}
int main()
{
    char pointer='a', target;
    string s;
    cin>> s;
    for(int i=0 ; i<s.length() ; i++)
    {
        target = s[i];
        calc_steps(pointer, target);
        pointer = target;
    } 
    cout<< steps <<endl;
}