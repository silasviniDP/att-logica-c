#include <stdio.h>

/* Faça um algoritmo que leia um valor x, calcule e mostre os 20 primeiros termos da série:
S = 1/x − 1 + 1/x − 2 + 1/x − 3 + ... */

int main(){

    float S = 0;
    int x;

    printf("Digite um valor para x: ");
    scanf("%d", &x);

    for (int i = 1; i <= 20; i++) {
       S = S + 1.0 / (x - i);
    }
    
    printf("O valor de S e: %.2f\n", S);
    
    return 0;
}
