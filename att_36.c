#include <stdio.h>

/* Calcular o valor de S dado pela sequência: 
S = 1 + 1/2 + 1/3 + 1/4 + ... + 1/10 */

int main(){

    float S = 0;

    for (int denominador = 1; denominador <= 10; denominador++) {
        S = S + 1.0 / denominador;
    }
    
    printf("O valor final de S e: %.2f\n", S);

    return 0;
}
