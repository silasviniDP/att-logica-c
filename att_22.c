#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo para ler 2 valores inteiros e uma das seguintes operações serem executadas: 
1. Adição, 2. Subtração, 3. Divisão e 4. Multiplicação. Calcular e mostrar o resultado da operação. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    int numero_1, numero_2, resultado, escolha;

    printf("Digite um número: ");
    scanf("%d", &numero_1);
    printf("Digite outro número: ");
    scanf("%d", &numero_2);
    printf("-----Operações-----\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Divisão\n");
    printf("4. Multiplicação\n");
    printf("\nEscolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: {
            resultado = numero_1 + numero_2;
            printf("Sua operação é Adição: %d + %d = %d", numero_1, numero_2, resultado);

        break;
        }
        case 2: {
            resultado = numero_1 - numero_2;
            printf("Sua operação é Subtração: %d - %d = %d", numero_1, numero_2, resultado);

        break;
        }
        case 3: {
            resultado = numero_1 / numero_2;
            printf("Sua operação é Divisão: %d / %d = %d", numero_1, numero_2, resultado);

        break;
        }
        case 4: {
            resultado = numero_1 * numero_2;
            printf("Sua operação é Multiplicação: %d * %d = %d", numero_1, numero_2, resultado);
        }

    }

    return 0;
}
