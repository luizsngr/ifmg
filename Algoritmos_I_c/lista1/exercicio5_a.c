#include <stdio.h>

void soma(float w, float m)
{
    float c = w + m;
    printf("A soma dos dois numeros eh %.2f\n", c);
}
int main()
{
    float x, y;
    printf("digite dois numeros inteiros:");
    scanf("%f %f", &x, &y);
    soma(x, y);
    return 0;
}