#include <stdio.h>


int main()
{

     double r, area, pi;

     printf("Digite o valor do raio do circulo: ");
     scanf("%lf", &r);

     pi = 3.14159;
     area = pi * (r * r);

     printf("AREA = %.3lf", area);


    return 0;
}
