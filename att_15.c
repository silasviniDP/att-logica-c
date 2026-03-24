#include <stdio.h>
#include <locale.h>

/* Faça um algoritmo que recebe um valor e mostra se o mesmo é par ou impar. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    int numero;

    printf("Digite um número: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("Seu número é par!\n");
    } else {
        printf("Seu número é impar\n");
    }

    return 0;
}
