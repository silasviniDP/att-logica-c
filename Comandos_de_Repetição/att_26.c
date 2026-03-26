#include <stdio.h>
#include <locale.h>

/* Fazer um algoritmo que calcule e mostre a tabuada do 7. */

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("A tabuada do 7 é: \n");
    for (int i = 1; i <= 10; i++) {
        printf("%i\n", i * 7);
    }

    return 0;
}
