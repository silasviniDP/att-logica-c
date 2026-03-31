#include <stdio.h>

int main(){

    int x, y;

    printf("Digite dois numeros ");
    scanf("%d %d", &x, &y);

    printf("O quociente desses numeros e: %d\n", x / y);
    printf("O resto destes numeros e: %d\n", x % y);
    
    return 0;
}
