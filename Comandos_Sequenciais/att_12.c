#include <stdio.h>
#include <locale.h>

/* Fazer um algoritmo que calcule a média aritmética dos números 7, 8 e 9 e a média
nos números 4, 5 e 6. Mostre a soma das duas médias e a média das médias. */

int main(){
    setlocale (LC_ALL, "Portuguese");

    float media_1, media_2, soma_media, media_media;

    media_1 = (7 + 8 + 9) / 3.0;
    media_2 = (4 + 5 + 6) / 3.0;
    soma_media = media_1 + media_2;
    media_media = (media_1 + media_2) / 2.0;

    printf("A média dos números 7, 8 e 9 é: %.1f\n", media_1);
    printf("A média dos números 4, 5 e 6 é: %.1f\n", media_2);
    printf("A soma entre as médias é: %.1f\n", soma_media);
    printf("A média dessas duas médias é: %.1f\n", media_media);

    return 0;
}
