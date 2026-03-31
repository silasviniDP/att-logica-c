#include <stdio.h>
#include <math.h>

int main(){

    int c200, c100, c50, c20, c10, c5, c2;
    int m100, m50, m25, m10, m5;
    float vp, pc;
    int troco;
    // c é igual cédula
    // m é igual moeda
    // vp é valor do produto
    // pc é pagamento do cliente

    printf("Qual o valor do produto: R$ ");
    scanf("%f", &vp);
    printf("Quanto o cliente pagou: R$ ");
    scanf("%f", &pc);

    /* Converter para centavos evita erros de float.
    Já que % (Resto) só funciona para inteiros. */
    troco = (int)round((pc - vp) * 100);
    // round() é uma função que arredonda um número float para o inteiro mais próximo.

    printf("O troco e: R$ %.2f\n", troco / 100.0);

    // Cédulas (em centavos)
    c200 = troco / 20000; troco %= 20000;
    c100 = troco / 10000; troco %= 10000;
    c50  = troco / 5000;  troco %= 5000;
    c20  = troco / 2000;  troco %= 2000;
    c10  = troco / 1000;  troco %= 1000;
    c5   = troco / 500;   troco %= 500;
    c2   = troco / 200;   troco %= 200;

    // Moedas (em centavos)
    m100 = troco / 100; troco %= 100;
    m50  = troco / 50;  troco %= 50;
    m25  = troco / 25;  troco %= 25;
    m10  = troco / 10;  troco %= 10;
    m5   = troco / 5;   troco %= 5;

    printf("Qtd. Cedulas de R$200,00: %d\n", c200);
    printf("Qtd. Cedulas de R$100,00: %d\n", c100);
    printf("Qtd. Cedulas de R$ 50,00: %d\n", c50);
    printf("Qtd. Cedulas de R$ 20,00: %d\n", c20);
    printf("Qtd. Cedulas de R$ 10,00: %d\n", c10);
    printf("Qtd. Cedulas de R$  5,00: %d\n", c5);
    printf("Qtd. Cedulas de R$  2,00: %d\n", c2);
    printf("Qtd. Moedas  de R$  1,00: %d\n", m100);
    printf("Qtd. Moedas  de R$  0,50: %d\n", m50);
    printf("Qtd. Moedas  de R$  0,25: %d\n", m25);
    printf("Qtd. Moedas  de R$  0,10: %d\n", m10);
    printf("Qtd. Moedas  de R$  0,05: %d\n", m5);

    return 0;
}
