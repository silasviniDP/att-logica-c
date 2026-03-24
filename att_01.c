#include <locale.h>
#include <stdio.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    
    int x, y;
    printf("Digite um número: ");
    scanf("%d", &x);
    printf("Digite outro número: ");
    scanf("%d", &y);

    printf("O valor da multiplicação é: %d", x * y);
    
    return 0;
}
