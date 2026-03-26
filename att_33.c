#include <stdio.h>

/* Calcular e mostrar a média aritmética dos números pares compreendidos entre 13 e 73. */

int main(){

    int soma = 0, contador = 0;
    float media;

    for (int numeros = 14; numeros <= 72; numeros += 2) {
        soma = soma + numeros;
        contador = contador + 1;
        media = (float)soma / contador;
    }

    printf("A media aritmetica dos numeros pares\n");
    printf("compreendidos entre 13 e 73 e: %.1f\n", media);
    
    return 0;
}
