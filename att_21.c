#include <stdio.h>
#include <locale.h>

/* Escrever um algoritmo que leia três valores inteiros e verifique se eles podem ser os lados de um triângulo. 
Se forem, informar qual o tipo de triângulo que eles formam: equilâtero, ísoscele ou escaleno. */

int main(){
    setlocale(LC_ALL, "Portuguese");

    int lado_1, lado_2, lado_3;

    printf("1° Lado: ");
    scanf("%d", &lado_1);
    printf("2° Lado: ");
    scanf("%d", &lado_2);
    printf("3° Lado: ");
    scanf("%d", &lado_3);

    // Verifica se forma um triângulo
    if (lado_1 < lado_2 + lado_3 && lado_2 < lado_1 + lado_3 && lado_3 < lado_1 + lado_2) {
        // Verifica o tipo do triângulo
        if (lado_1 == lado_2 && lado_2 == lado_3) {
            printf("Triângulo Equilátero!\n");
        } else if (lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3) {
            printf("Triângulo Isósceles!\n");
        } else {
            printf("Triângulo Escaleno!\n");
        }

    } else {
        printf("Esses lados nao formam um triângulo!\n");
    }


    return 0;
}
