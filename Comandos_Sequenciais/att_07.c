#include <stdio.h>

int main(){

    int r;
    float h, A, V, pi;

    printf("Qual o raio do seu cilindro: ");
    scanf("%d", &r);
    printf("Qual a altura do seu cilindro em cm: ");
    scanf("%f", &h);

    pi = 3.14;
    A = 2 * pi * r * (h + r);
    V = pi * r * r * h;

    printf("A area do seu cilindro e: %.2f\n", A);
    printf("O volume do seu cilindro e: %.2f", V);

    return 0;
}
