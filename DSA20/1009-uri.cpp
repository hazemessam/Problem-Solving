#include<iostream>
using namespace std;
int main()
{
    string n;
    float fs, s;
    cin>> n >> fs >> s;
    printf("TOTAL = R$ %.2f\n", (fs + s*15/100));
}