#include <stdio.h>

int main(){

    int r;
    float pi, A;

    printf("Escreva o raio de um circulo: ");
    scanf("%d", &r);

    pi = 3.14;
    A = pi * r * r;

    printf("A area do seu circulo e: %.2f", A);

    return 0;
}
