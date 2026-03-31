#include <stdio.h>

int main(){

    float paut, pf, impostos, pr;
    /* paut é preço final do automóvel; pf é preço de fábrica
    pr é porcentagem do revendedor. */

    printf("Digite o preco de fabrica do seu automovel: R$ ");
    scanf("%f", &pf);

    impostos = pf * 0.45;
    pr = pf * 0.28;
    paut = pf + impostos + pr;

    printf("\nO preco final calculado do seu carro e: R$ %.2f\n", paut);

    return 0;
}
