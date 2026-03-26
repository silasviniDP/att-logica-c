#include <stdio.h>

/* Construa um algoritmo que calcule e mostre o valor de H, sendo H calculado por:
   H = 1 + 2 + 3 + 4 + ... + N */

int main(){

    int N, H = 0;

    printf("Digite ate onde a soma do valor de H ira: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++){
        H = H + i;
    }

    printf("O valor de H e: %d\n", H);

    return 0;
}
