#include <stdio.h>;

int main(){

    float cm, pol;

    printf("Digite um comprimento em centimetros: ");
    scanf("%f" &cm);

    pol = 2.54 * cm;

    printf("Seu comprimento em polegadas e: %.2f\n", pol);

    return 0;
}
