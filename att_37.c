#include <stdio.h>

/* Calcular o valor de S dado pela sequência:
S = 1 + 3/2 + 5/3 + 7/4 + ... + 99/50 */

int main(){

    float S = 0;
    int numerador = 1;
    
    for (int denominador = 1; denominador <= 50; denominador++) {
        S = S + (float)numerador / denominador;
        numerador += 2;
    }

    printf("O resultado de S e: %.2f\n", S);

    return 0;
}
