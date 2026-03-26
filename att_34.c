#include <stdio.h>

/* Ler 10 valores, um de cada vez, e contar quantos deles estão no intervalo [10...50]
   e quantos deles estão fora deste intervalo. Mostrar as quantidades calculadas. */

int main(){

    int numeros, dentro = 0, fora = 0;

    for (int valor = 1; valor <= 10; valor++) {
        printf("Digite um numero: ");
        scanf("%d", &numeros);

        if (numeros >= 10 && numeros <= 50 ) {
            dentro++;
        } else {
            fora++;
        }
    }

    printf("\nA quantidade de numeros dentro do intervalo de 10 a 50 foi: %d\n", dentro);
    printf("A quantidade de numeros fora do intervalo de 10 a 50 foi: %d\n", fora);

    return 0;
}
