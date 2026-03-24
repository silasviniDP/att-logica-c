#include <stdio.h>

int main(){
    
    float cm, pol;

    printf("Digite um comprimento em cm: ");
    scanf("%f", &cm);

    pol = cm / 2.54;

    printf("\nEsse comprimento em polegadas e: %.2f", pol);

    return 0;
}
