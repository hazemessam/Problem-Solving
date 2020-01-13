#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int h, k_per_h;
    cin>> h >> k_per_h;
    int ks = h * k_per_h;
    printf("%.3f\n", ks/12.0); 
}