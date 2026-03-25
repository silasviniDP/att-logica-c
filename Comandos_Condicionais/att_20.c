#include <stdio.h>
#include <locale.h>

/* Escrever um algoritmo que leia tres valores inteiros distintos e os escreva em ordem crescente. */

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero_1, numero_2, numero_3;

    printf("Digite um número: ");
    scanf("%d", &numero_1);
    printf("Digite outro número: ");
    scanf("%d", &numero_2);
    printf("Digite mais outro: ");
    scanf("%d", &numero_3);
    
    if (numero_1 < numero_2 && numero_2 < numero_3) {
        printf("Ordem crescente: %d, %d, %d\n", numero_1, numero_2, numero_3);
    } else if (numero_2 < numero_1 && numero_1 < numero_3) {
        printf("Ordem crescente: %d, %d, %d\n", numero_2, numero_1, numero_3);
    } else if (numero_3 < numero_1 && numero_1 < numero_2) {
        printf("Ordem crescente: %d, %d, %d\n", numero_3, numero_1, numero_2);
    } else if (numero_1 < numero_3 && numero_3 < numero_2) {
        printf("Ordem crescente: %d, %d, %d\n", numero_1, numero_3, numero_2);
    } else if (numero_2 < numero_3 && numero_3 < numero_1) {
        printf("Ordem crescente: %d, %d, %d\n", numero_2, numero_3, numero_1);
    } else {
        printf("Ordem crescente: %d, %d, %d\n", numero_3, numero_2, numero_1);
    }

    return 0;
}
