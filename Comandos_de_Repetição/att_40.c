#include <stdio.h>

/* Escreva um algoritmo que leia os valores de K e N. Calcule e mostre o valor de K^N. */

int main(){

    int K, N, Multiplicacao = 1;

    printf("Digite um numero: ");
    scanf("%d", &K);
    printf("Agora digite um numero para ser potencia dele: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++ ) {
        Multiplicacao = Multiplicacao * K;
    }

    printf("O resultado dessa potencia e: %d\n", Multiplicacao);
    
    return 0;
}
