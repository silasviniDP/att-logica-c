#include <stdio.h>
#include <locale.h>

/* As maçãs custam R$0,30 cada, se forem compradas menos do que uma dúzia, e R$0.25 se forem compradas pelo menos doze. 
Escreva um algoritmo que leia o número de maçãs compradas, calcule e mostre o valor total da compra. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    int quantidade;
    float preco_macas, preco_final;

    printf("Digite a quantia de maçãs compradas: ");
    scanf("%d", &quantidade);

    if (quantidade < 12) {
        preco_macas = 0.30;            
    } else {
        preco_macas = 0.25;
    }
    
    preco_final = quantidade * preco_macas;

    printf("O valor da compra é: R$%.2f\n", preco_final);

    return 0;
}
