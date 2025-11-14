#include <stdio.h>

float soma(float w, float m)
{
    return w + m;
}
int main()
{
    float x, y;
    printf("digite dois numeros:");
    scanf("%f %f", &x, &y);
    printf("A soma dos dois numeros eh %.2f\n", soma(x, y));
    return 0;
}