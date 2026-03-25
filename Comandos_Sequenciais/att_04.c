#include <stdio.h>;

int main(){

    int x, y, soma, produto, quociente;

    printf("Digite um numero: ");
    scanf("%d", &x);
    printf("Digite outro numero: ");
    scanf("%d", &y);

    soma = x + y;
    produto = x * y;
    quociente = x / y;

    printf("A soma entre os dois numeros e: %d", soma);
    printf("\nO produto entre os dois numeros e: %d", produto);
    printf("\nO quociente entre os dois numeros e: %d", quociente);

    return 0;
}
