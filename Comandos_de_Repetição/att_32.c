#include <stdio.h>

/* Construa um algoritmo que leia um conjunto de 20 números inteiros e mostre qual foi o maior valor fornecido. */

int main(){

    int numero, maior_numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    maior_numero = numero;

    for (int resposta = 2; resposta <= 20; resposta++) {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > maior_numero) {
            maior_numero = numero;
        } 
    }

    printf("\n\nO maior numero foi: %d\n", maior_numero);

    return 0;
}
