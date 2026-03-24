#include <stdio.h>

int main(){
    
    float salario_fixo, total_vendas, comissao, salario_final;
    
    printf("Digite seu salario fixo: ");
    scanf("%f", &salario_fixo);
    printf("Digite o total de venda dos produtos neste mes: ");
    scanf("%f", &total_vendas);

    comissao = total_vendas * 0.15;
    salario_final = salario_fixo + comissao;

    printf("\nSeu salario fixo e: %.2f\n", salario_fixo);
    printf("Seu salario final foi de: %.2f", salario_final);
    
    return 0;
}
