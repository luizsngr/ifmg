#include <stdio.h>
#include <math.h>

float salario(float sal1, float sal2)
{
    return fmax(sal1, sal2);
}
int main()
{
    float s1, s2;
    printf("digite 2 salarios:");
    scanf("%f %f", &s1, &s2);
    printf("O maior salario e %.2f\n", salario(s1, s2));
    return 0;
}