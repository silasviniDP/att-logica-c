#include <stdio.h>
#include <locale.h>

/* Algoritmo que mostra a quantidade de cédulas de um caixa eletrônico de um banco. 
O algoritmo recebe como entrada o valor inteiro a ser sacado pelo cliente, em seguida
apresente a quantidade de cada cédula que o cliente deverá receber, de forma que a quantidade
de cédulas seja o menor possível*/

int main (){
    setlocale (LC_ALL, "Portuguese");
 
    int saque, cedula_5, cedula_10, cedula_20, cedula_50, cedula_100, cedula_200;

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    cedula_200 = saque / 200;
    saque = saque % 200;
    cedula_100 = saque / 100;
    saque = saque % 100;
    cedula_50 = saque / 50;
    saque = saque % 50;
    cedula_20 = saque / 20;
    saque = saque % 20;
    cedula_10 = saque / 10;
    saque = saque % 10;
    cedula_5 = saque / 5;
    saque = saque % 5;

    printf("Cédulas de 200: %d\n", cedula_200);
    printf("Cédulas de 100: %d\n", cedula_100);
    printf("Cédulas de 50: %d\n", cedula_50);
    printf("Cédulas de 20: %d\n", cedula_20);
    printf("Cédulas de 10: %d\n", cedula_10);
    printf("Cédulas de 5: %d\n", cedula_5);
    
    return 0;
}
