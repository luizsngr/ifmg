#include <stdio.h>

void metade (float *x)
{
    *x = *x / 2.0;
}
int main()
{
    float vetor[4];
    printf("Digite 4 numeros inteiros:\n");
    for (int i = 0; i < 4; i++)
    {
        printf("Numero %d: ", i+1);
        scanf("%f", &vetor[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        metade(&vetor[i]);
    }
    printf("Metade dos numeros:\n");
    printf("%.2f\n%.2f\n%.2f\n%.2f\n", vetor[0], vetor[1], vetor[2], vetor[3]);
    return 0;
}