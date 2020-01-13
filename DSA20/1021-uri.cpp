#include<iostream>
using namespace std;
int main()
{
    double n;
    int n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, c1=0, c50=0, c25=0, c10=0, c05=0, c01=0;

    scanf("%lf", &n);
    
    cout<< n <<endl;
    while(n >= .01)
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
            c1++;
        }
        else if(n >= .50)
        {
            n-=.50;
            c50++;
        }
        else if(n >= .25)
        {
            n-=.25;
            c25++;
        }
        else if(n >= .10)
        {
            n-=.10;
            c10++;
        }
        else if(n >= .05)
        {
            n-=.05;
            c05++;
        }
        else if(n >= .01)
        {
            n-=.01;
            c01++;
        }
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", n100);
    printf("%i nota(s) de R$ 50.00\n", n50);
    printf("%i nota(s) de R$ 20.00\n", n20);
    printf("%i nota(s) de R$ 10.00\n", n10);
    printf("%i nota(s) de R$ 5.00\n", n5);
    printf("%i nota(s) de R$ 2.00\n", n2);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", c1);
    printf("%i moeda(s) de R$ 0.50\n", c50);
    printf("%i moeda(s) de R$ 0.25\n", c25);
    printf("%i moeda(s) de R$ 0.10\n", c10);
    printf("%i moeda(s) de R$ 0.05\n", c05);
    printf("%i moeda(s) de R$ 0.01\n", c01);
}