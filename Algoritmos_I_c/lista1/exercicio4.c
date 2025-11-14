#include <stdio.h>
#include <math.h>

double catetos(double cat1, double cat2)
{
    return sqrt((cat1 * cat1) + (cat2 * cat2));
}
int main()
{
    double a, b;
    printf("Digite os valores dos catetos:");
    scanf("%lf %lf", &a, &b);
    printf("O valor da hipotenusa e %.2lf\n", catetos(a, b));
    return 0;
}
