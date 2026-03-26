#include <stdio.h>
#include <locale.h>

/* Escreva um algoritmo que leia a idade de 10 pessoas, calcule e mostre a quantidade de pessoas maiores de idade. */

int main(){
    setlocale(LC_ALL, "Portuguese");

    int idade, pessoas = 0;

    for (int reposta = 1; reposta <= 10; reposta++) {
        printf("Digite uma idade: ");
        scanf("%d", &idade);

        if (idade >= 18) {
            pessoas ++;
            printf("Essa pessoa é maior de idade.\n\n");
        } else {
            printf("Essa pessoa não é maior de idade.\n\n");
        }
    }

    printf("A quantia de pessoas maiores de idade é: %d\n", pessoas);

    return 0;
}
