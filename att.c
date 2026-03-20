#include <stdio.h>

int main (){

    float A, B, resultado;

    printf("primeiro numero: ");
    scanf("%f", &A);
    printf("segundo numero: ");
    scanf("%f", &B);

    resultado = A * B;

    printf("resultado: %.1f ", resultado);
}
