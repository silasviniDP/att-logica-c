#include <stdio.h>

int main(){

    float sf, totv, sff, comissao;
    // sf é salário fixo.
    // totv é total de vendas.
    // sff é salário final.

    printf("Digite seu salario fixo: R$ ");
    scanf("%f", &sf);
    printf("Escreva quanto gerou o total de vendas deste mes: R$ ");
    scanf("%f", &totv);

    comissao = totv * 0.15; // 0.15 pois o vendedor recebe 15% de comissão do total de vendas.
    sff = sf + comissao;

    printf("Seu salario fixo e de: R$ %.2f\n", sf);
    printf("E seu salario final e: R$ %.2f\n", sff);

    return 0;
}
