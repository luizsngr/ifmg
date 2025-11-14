#include <stdio.h>

int soma(int a, int b)
{
    return a + b;
}
int mult(int a, int b)
{
    return soma(a, b) * 5;
}
int main()
{
    printf("insira dois numeros inteiros:");
    int x, y;
    scanf("%d %d", &x, &y);
    printf("A soma eh %d\n", soma(x, y));
    printf("A multiplicacao por 5 eh %d\n", mult(x, y));
}