#include <stdio.h>;

int main(){

    int x, y;

    printf("Digite dois numeros: ");
    scanf("%d %d", &x, &y);

    printf("A soma entre os dois numeros e: %d\n", x + y);
    printf("O produto entre os dois numeros e: %d\n", x * y);
    printf("O quociente entre os dois numeros e: %d\n", x / y);

    return 0;
}
