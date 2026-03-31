#include <stdio.h>

int main (){
 
    int saque, c200, c100, c50, c20, c10, c5;
    // c é igual a Cédula

    printf("Digite o valor do saque: ");
    scanf("%d", &saque);

    c200 = saque / 200;
    saque = saque % 200;
    c100 = saque / 100;
    saque = saque % 100;
    c50 = saque / 50;
    saque = saque % 50;
    c20 = saque / 20;
    saque = saque % 20;
    c10 = saque / 10;
    saque = saque % 10;
    c5 = saque / 5;
    saque = saque % 5;

    printf("Cedulas de 200: %d\n", c200);
    printf("Cedulas de 100: %d\n", c100);
    printf("Cedulas de 50: %d\n", c50);
    printf("Cedulas de 20: %d\n", c20);
    printf("Cedulas de 10: %d\n", c10);
    printf("Cedulas de 5: %d\n", c5);
    
    return 0;
}
