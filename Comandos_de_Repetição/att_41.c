#include <stdio.h>

/* Escreva um programa que calcule as n primeiras potências do número k. 
Para n = 3 e k = 2 teremos:
• 2 elevado a 1 = 2
• 2 elevado a 2 = 4
• 2 elevado a 3 = 8 */

int main(){

    int k, n, resultado = 1;

    printf("Digite um numero para base: ");
    scanf("%d", &k);
    printf("Digite um numero que e ate onde vai a potencia: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        resultado = resultado * k;
        printf("%d elevado a %d = %d\n", k, i, resultado);
    }
    
    return 0;
}
