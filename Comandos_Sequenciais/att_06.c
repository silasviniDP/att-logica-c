#include <stdio.h>
#include <math.h>
#define PI 3.14


int main(){

    int r;
    float A;
    // r é Raio
    // A é área

    printf("Digite o raio do seu circulo: ");
    scanf("%d", &r);

    A = PI * pow(r, 2);

    printf("A area do seu circulo e: %.2f\n", A);

    return 0;
}
