#include <stdio.h>
#include <math.h>

void aumento(float *x, float *y)
{
   *x = *x + (*x * *y / 100);
}
int main()
{
    float sal, perc;
    printf("digite o valor do salario e do percentual de aumento: \n");
    scanf("%f %f", &sal, &perc);

    aumento(&sal, &perc);

    printf("O novo salario com aumento eh %.2f\n", sal);

    return 0;
}