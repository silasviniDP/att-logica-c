#include <stdio.h>
#include <locale.h>

/* Faça um algoritmo que auxiliará um funcionário de um caixa de supermercado. 
O algoritmo deverá receber como entrada o valor da compra do cliente e o valor pago pelo cliente,
em seguida o algoritmo deverá apresentar o troco da compra, de forma que o mesmo deve 
apresentar a quantidade de cédulas e moedas para compor o troco do cliente. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    int cedula_200, cedula_100, cedula_50, cedula_20, cedula_10, cedula_5, cedula_2;
    int moeda_1, moeda_50, moeda_25, moeda_10, moeda_5;
    float valor_produto, pagamento_cliente, troco;
    int troco_centavos; 
    
    printf("Qual o valor do produto: R$");
    scanf("%f", &valor_produto);
    printf("Quanto o cliente pagou: R$");
    scanf("%f", &pagamento_cliente);

    troco = pagamento_cliente - valor_produto;
    troco_centavos = (int)(troco * 100);
    
    cedula_200 = troco_centavos / 20000;
    troco_centavos = troco_centavos % 20000;
    cedula_100 = troco_centavos / 10000;
    troco_centavos = troco_centavos % 10000;
    cedula_50 = troco_centavos / 5000;
    troco_centavos = troco_centavos % 5000;
    cedula_20 = troco_centavos / 2000;
    troco_centavos = troco_centavos % 2000;
    cedula_10 = troco_centavos / 1000;
    troco_centavos = troco_centavos % 1000;
    cedula_5 = troco_centavos / 500;
    troco_centavos = troco_centavos % 500;
    cedula_2 = troco_centavos / 200;
    troco_centavos = troco_centavos % 200;

    moeda_1 = troco_centavos / 100;
    troco_centavos = troco_centavos % 100;
    moeda_50 = troco_centavos / 50;
    troco_centavos = troco_centavos % 50;
    moeda_25 = troco_centavos / 25;
    troco_centavos = troco_centavos % 25;
    moeda_10 = troco_centavos / 10;
    troco_centavos = troco_centavos % 10;
    moeda_5 = troco_centavos / 5;
    troco_centavos = troco_centavos % 5;    

    printf("O troco é: %.2f\n", troco);
    printf("Qtd.Cédulas de R$200,00: %d\n", cedula_200);
    printf("Qtd.Cédulas de R$100,00: %d\n", cedula_100);
    printf("Qtd.Cédulas de R$50,00: %d\n", cedula_50);
    printf("Qtd.Cédulas de R$20,00: %d\n", cedula_20);
    printf("Qtd.Cédulas de R$10,00: %d\n", cedula_10);
    printf("Qtd.Cédulas de R$5,00: %d\n", cedula_5);
    printf("Qtd.Cédulas de R$2,00: %d\n", cedula_2);
    printf("Qtd.Moedas de R$1,00: %d\n", moeda_1);
    printf("Qtd.Moedas de R$0,50: %d\n", moeda_50);
    printf("Qtd.Moedas de R$0,25: %d\n", moeda_25);
    printf("Qtd.Moedas de R$0,10: %d\n", moeda_10);
    printf("Qtd.Moedas de R$0,05: %d\n", moeda_5);

    return 0;
}
