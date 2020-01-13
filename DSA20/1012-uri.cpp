#include<iostream>
using namespace std;
int main()
{
    double a, b, c, pi=3.14159;
    cin>> a >> b >> c;
    printf("TRIANGULO: %.3f\n", (1.0/2)*a*c);
    printf("CIRCULO: %.3f\n", pi*c*c);
    printf("TRAPEZIO: %.3f\n", c*((a+b)/2));
    printf("QUADRADO: %.3f\n", b*b);
    printf("RETANGULO: %.3f\n", a*b);
}