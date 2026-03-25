#include <stdio.h>
#include <locale.h>

/* Faça um algoritmo que mostre os números pares compreendidos entre 14 e 30 (inclusive). */

int main(){
    setlocale(LC_ALL, "Portuguese");
    
    printf("Os números pares entre 14 e 30 são: \n");
    for (int i = 14; i <= 30; i += 2) {
        printf("%i\n", i);
    } 

    return 0;
}
