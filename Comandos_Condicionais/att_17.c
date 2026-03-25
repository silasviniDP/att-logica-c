#include <stdio.h>
#include <locale.h>

/* Faça um algoritmo que leia dois números e identifique se são iguais ou diferentes.
Caso eles sejam iguais, mostre uma mensagem dizendo que eles são iguais. Caso sejam diferentes,
informe qual número é o maior, e uma mensagem que são diferentes. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    int numero_1, numero_2;

    printf("Digite um número: ");
    scanf("%d", &numero_1);
    printf("Digite outro número: ");
    scanf("%d", &numero_2);

    if (numero_1 == numero_2) {
        printf("Os números são iguais!\n");
    } else {
        printf("Os números são diferentes!\n");
        if (numero_1 > numero_2) {
            printf("O maior número é: %d\n", numero_1);

        } else {
            printf("O maior número é: %d\n", numero_2);
        }
    }
    return 0;
}
