#include <stdio.h>
#include <math.h>


float area_quadrado(float lado)
{
    return lado * lado;
}
float area_circulo(float raio)
{
    return M_PI * (raio * raio);
}
int main()
{
    float lado, raio;
    printf("Digite o lado do quadrado: ");
    scanf("%f", &lado);
    float areaQ = area_quadrado(lado);
    printf("Area do quadrado: %.2f\n", areaQ);

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);
    float areaC = area_circulo(raio);
    printf("Area do circulo: %.2f\n", areaC);

}