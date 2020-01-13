#include<iostream>
using namespace std;
int main()
{
    string str;
    int counter=0;
    cin>> str;
    // sort the string
    for(int i=0 ; i<(str.length()-1) ; i++)
        for(int j=i+1 ; j<str.length() ; j++)
            if(str[i] > str[j])
                swap(str[i], str[j]);
    // check distinict characters
    for(int i=0 ; i<str.length() ; i++)
            if(str[i] != str[i+1])
                    counter++;
    // check the type of the counter
    if(counter%2 == 0)
        cout<< "CHAT WITH HER!" <<endl;
    else
        cout<< "IGNORE HIM!" <<endl;
}