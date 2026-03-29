#include <stdio.h>

/* Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa inicial, 
em gramas, fazer um programa que determine o tempo necessário para que essa massa se torne menor do que 0.5 gramas. 
Escrever a massa inicial, a massa final e o tempo calculado em segundos. */

int main(){
    // 50 seg -> massa / 2
    
    int segundos = 0;
    float massa, massa_inicial, massa_final; 

    printf("Digite a massa inicial em gramas do material radioativo: ");
    scanf("%f", &massa);

    massa_inicial = massa;
    printf("\nA massa inicial foi: %.2f\n", massa_inicial);

    while (massa >= 0.5) {
        massa = massa / 2;
        segundos = segundos + 50;
    }
    
    massa_final = massa;

    printf("Sua massa final e: %.2f\n", massa_final);
    printf("Ja o tempo decorrido em segundos e: %d\n", segundos);    

    return 0;
}
