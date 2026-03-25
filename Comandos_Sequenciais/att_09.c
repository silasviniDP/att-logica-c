#include <stdio.h>

int main(){

    float A, B, C, D;

    printf("Digite um numero: ");
    scanf("%f", &A);
    printf("Digite outro numero: ");
    scanf("%f", &B);

    C = B;
    D = A;
    
    /*A = scanf("%f", &B);
    B = scanf("%f", &A);*/

    printf("\nAgora o primeiro numero se torna o segundo: %.1f\n", C);
    printf("E o segundo numero se torna o primeiro: %.1f", D);

    return 0;
}
