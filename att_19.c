#include <stdio.h>
#include <locale.h>

/*  Escreva um algoritmo que recebe três valores inteiros e mostre o valor do maior
número digitado pelo usuário. */

int main(){
    setlocale (LC_ALL, "Portuguese");
    
    int numero_1, numero_2, numero_3;

    printf("Digite o primeiro número: ");
    scanf("%d", &numero_1);
    printf("Digite o segundo número: ");
    scanf("%d", &numero_2);
    printf("Digite o terceiro número: ");
    scanf("%d", &numero_3);

    

    return 0;
}
