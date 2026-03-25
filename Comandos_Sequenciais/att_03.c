#include <stdio.h>

int main(){

    int x, y, quociente, resto;

    printf("Primeiro: ");
    scanf("%d", &x);
    printf("Segundo: ");
    scanf("%d", &y);

    quociente = x / y;
    resto = x % y;

    printf("Quociente: %d", quociente);
    printf("\nResto: %d", resto);
    
    return 0;
}
