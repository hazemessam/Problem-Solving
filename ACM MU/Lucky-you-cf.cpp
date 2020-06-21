#include<iostream>
using namespace std;
int main()
{
    int n;
    float c = 1;
    cin>> n;
    for(int i=0 ; i<n ; i++)
        c = c*.5;
    printf("%.6f\n", 1-c);
}