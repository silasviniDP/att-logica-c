#include <stdio.h>
#include <locale.h>

/* Escreva um programa que calcule o Valor a Pagar pela conta de energia elétrica
para uma determinada Classe Consumidora. Veja as informações a seguir: */
/* a. O programa deve receber como dados de entrada: o tipo da Classe Consumidora, (conforme
definido na Tabela 1) e o Consumo em quilowatts/hora (KW h); */
/* b. O calculo do Valor do Fornecimento (VF), em Reais (R$), é definido pela seguinte fórmula: 
VF = Consumo ∗ Tarifa, onde a tarifa é definida na Tabela 1, conforme a classe consumidora; */
/* c. O Valor a Pagar (VP) é definido pela seguinte fórmula: VP = VF + ICMS, onde a taxa de
ICMS é calculada aplicando uma alíquota de 30% ao valor do fornecimento (ICMS = 0.3 ∗ VF). */
/* Tabela 1: Tarifa de cada Classe consumidora.
Classe Consumidora Tarifa (R$)
        A            0.5
        B            0.8
        C            1.0       */

int main(){
    setlocale(LC_ALL, "Portuguese");

    char CC;
    float VP, Consumo, VF, Tarifa, ICMS;
    
    printf("As Classes Consumidoras existentes são: A, B e C.\n");
    printf("Digite sua Classe Consumidora: ");
    scanf(" %c", &CC);
    printf("Qual foi seu Consumo (Em quilowatts/hora): ");
    scanf("%f", &Consumo);

    if (CC == 'A') {
        Tarifa = 0.5;
    } else if (CC == 'B') {
        Tarifa = 0.8;
    } else if (CC == 'C') {
        Tarifa = 1.0;
    } else {
        printf("Você digitou uma resposta invalida!");
        return 1;
    }

    VF = Consumo * Tarifa;
    ICMS = 0.3 * VF;
    VP = VF + ICMS;
    
    printf("O valor que você tera que pagar é: R$%.2f\n", VP);

    return 0;
}
