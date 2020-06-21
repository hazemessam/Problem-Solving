#include<iostream>
using namespace std;
int main()
{
    int n, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
    cin>> n;
    cout<< n <<endl;
    while (n > 0)
        if(n >= 100)
        {
            n-=100;
            n100++;
        }
        else if(n >= 50)
        {
            n-=50;
            n50++;
        } 
        else if(n >= 20)
        {
            n-=20;
            n20++;
        } 
        else if(n >= 10)
        {
            n-=10;
            n10++;
        } 
        else if(n >= 5)
        {
            n-=5;
            n5++;
        } 
        else if(n >= 2)
        {
            n-=2;
            n2++;
        } 
        else if(n >= 1)
        {
            n-=1;
            n1++;
        }
    printf("%i nota(s) de R$ 100,00\n", n100);
    printf("%i nota(s) de R$ 50,00\n", n50);
    printf("%i nota(s) de R$ 20,00\n", n20);
    printf("%i nota(s) de R$ 10,00\n", n10);
    printf("%i nota(s) de R$ 5,00\n", n5);
    printf("%i nota(s) de R$ 2,00\n", n2);
    printf("%i nota(s) de R$ 1,00\n", n1);
}