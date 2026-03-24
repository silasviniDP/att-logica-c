#include <stdio.h>
#include <locale.h>

/*  O preço de um automóvel é calculado pela soma do preço de fábrica, o preço dos
impostos (45% do preço de fábrica) e a porcentagem do revendedor (28% do preço de fábrica).
Fazer um algoritmo que leia o preço de fábrica. Calcule e mostre o preço final do carro. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    float preco_fabrica, impostos, porcentagem_revendedor, preco_final;

    printf("Qual o preço de fábrica do seu automóvel: R$");
    scanf("%f", &preco_fabrica);

    impostos = preco_fabrica * 0.45;
    porcentagem_revendedor = preco_fabrica * 0.28;
    preco_final = preco_fabrica + impostos + porcentagem_revendedor;

    printf("O preco final do seu automóvel é: R$%.2f\n", preco_final);

    return 0;
}
