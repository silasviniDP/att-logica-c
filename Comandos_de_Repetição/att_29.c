#include <stdio.h>
#include <locale.h>

/* Fazer um algoritmo que leia 5 números e verifique se ele está entre 100 e 200. 
Se estiver na faixa, mostrar ”Você digitou um número entre 100 e 200”, se não estiver na faixa,
mostrar ”Voce digitou um número fora da faixa entre 100 e 200”. */

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numero;

    for (int resposta = 1; resposta <= 5; resposta++) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero >= 100 && numero <= 200) {
        printf("\nVocê digitou um número na faixa de 100 e 200\n");

        } else {
        printf("\nVoce não digitou um número na faixa de 100 e 200\n");

        }
    }

    return 0;
}
