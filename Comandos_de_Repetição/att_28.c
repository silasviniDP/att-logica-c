#include <stdio.h>
#include <locale.h>

/* Fazer um algoritmo que calcule e mostre a soma dos cem primeiros números inteiros. */

int main(){
    setlocale(LC_ALL, "Portuguese");

    int soma = 0;
    
    for (int i = 1; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos cem primeiros números inteiros é: %d\n", soma);

    return 0;
}
