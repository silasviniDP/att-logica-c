#include <stdio.h>

/* Escreva um algoritmo que leia os valores das variáveis X e A e calcule o valor de S dado por:
S = 1/A ∗ 20/X + 2/A − 1 ∗ 19/X^2 + 3/A − 2 ∗ 18/X^3 + ... + 20/A − 19 ∗ 1/X^20 */

int main(){

    float S = 0, termo_atual;
    int A, X, potencia = 1;

    printf("Entregue valores as variaveis desta equação:\n");
    printf("S = 1/A ∗ 20/X + 2/A − 1 ∗ 19/X^2 + 3/A − 2 ∗ 18/X^3 + ... + 20/A − 19 ∗ 1/X^20\n");
    printf("Digite um valor para A: ");
    scanf("%d", &A);
    printf("Agora um para X: ");
    scanf("%d", &X);

    for (int i = 1; i <= 20; i++) {
        potencia = potencia * X;
        termo_atual = (float)i / (A + 1 - i) * (21 - i) / potencia;
        S = S + termo_atual;
    }

    printf("O resultado da sua equacao e: %.2f\n", S);

    return 0;
}
