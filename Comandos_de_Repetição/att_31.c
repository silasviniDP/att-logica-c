#include <stdio.h>
#include <locale.h>

/* A conversão de graus Fahrenheit para Celsius é obtida por c = 5/9 ∗ (f − 32). 
Faça um algoritmo que calcule e escreva uma tabela de graus Celsius em graus Fahrenheit, cujos graus
variem de 50 a 65 de 1 em 1. */

int main(){
    setlocale(LC_ALL, "Portuguese");

    float C;

    printf("--------Tabela--------\n");
    printf("Fahrenheit  |  Celsius\n");
    for (int F = 50; F <= 65; F++) {
        C = 5.0 / 9.0 * (F - 32);
        printf("   %d     |    %.1f\n", F, C);
    }

    return 0;
}
