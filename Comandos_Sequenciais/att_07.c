#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(){

    float r, A, V, h;
    // r é Raio
    // A é Área
    // V é Volume
    // h é Altura

    printf("Digite o raio do seu cilindro: ");
    scanf("%f", &r);
    printf("Agora digite em centimetros a altura do seu cilindro: ");
    scanf("%f", &h);

    A = 2 * PI * r * (h + r);
    V = PI * pow(r, 2) * h;

    printf("A Area do seu cilindro e: %.2f cm^2\n", A);
    printf("O Volume do seu cilindro e: %.2f cm^3\n", V);

    return 0;
}
