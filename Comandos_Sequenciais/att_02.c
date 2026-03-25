#include <stdio.h>

int main(){

    int x;

    printf("Digite um numero: ");
    scanf("%d", &x);

    printf("Seu antecessor e: %d", x - 1);
    printf("\nJa seu sucessor e: %d", x + 1);

    return 0;
}
