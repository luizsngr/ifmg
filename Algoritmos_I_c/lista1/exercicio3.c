#include <stdio.h>

int h(int x) {
    return x * x - 16;
}

int f(int x) {
    if (h(x) >= 0) {
        return h(x);
    } else {
        return 1;
    }
}

int g(int x) {
    if (f(x) == 0) {
        return x * x + 16;
    } else {
        return 0;
    }
}

int cal_y(int x) {
    return f(x) + g(x);
}

int main() {
    int x, y;
    printf("Digite um valor para x: ");
    scanf("%d", &x);
    y = cal_y(x);
    printf("O valor de y e: %d\n", y);
    return 0;
}