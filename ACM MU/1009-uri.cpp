#include<iostream>
using namespace std;
int main()
{
    string name;
    float salary, sale;
    cin>> name >> salary >> sale;
    printf("TOTAL = R$ %.2f", (salary + sale*15/100));
}