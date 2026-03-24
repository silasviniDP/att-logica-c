#include <stdio.h>
#include <locale.h>

/* Faça um algoritmo que recebe um valor inteiro, caso esse número seja positivo,
mostre o valor digitado, caso seja negativo mostre o valor digitado com o sinal invertido. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero > 0) {
        printf ("Seu número é: %d\n", numero);

    } else {
        printf("Seu número com sinal invertido é: %d\n", -numero);
    }

    return 0;
}
