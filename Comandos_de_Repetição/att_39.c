#include <stdio.h>

/* Escreva um algoritmo que calcule e mostre os 10 primeiros termos da série de
Fibonacci: 1 1 2 3 5 8 13 21 34 55 89 144 233 377 ... */

int main(){

    int a = 1, b = 1, c = 0;

    printf("os 10 primeiros termos de Fibonacci sao: ");
    printf("%d %d ", a, b);

    for (int i = 1; i <= 8; i++) {
        c = a + b;
        a = b;
        b = c;

        printf("%d ", c);
    }

    printf("\n");
    
    return 0;
}
