#include <stdio.h>
#include <locale.h>

/* Fazer um algoritmo que calcule e mostre o quadrado dos números inteiros compreendidos entre 15 e 30. */

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("O quadrado dos números compreendidos entre 15 e 30 é: \n");
    for (int i = 15; i <= 30; i++) {
        printf("%d² = %d\n", i, i * i);
    }

    return 0;
}
