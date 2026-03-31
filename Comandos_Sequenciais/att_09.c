#include <stdio.h>

int main(){

    int A, B, aux;
    // aux é "auxiliar"

    printf("Digite dois numeros: ");
    scanf("%d %d", &A, &B);
    
    // essa área serve para aux guarda o valor de A
    // A ficara vazia e recebera B
    // E ai B se tornara A graças au aux.
    aux = A;
    A = B;
    B = aux;
    
    printf("\nAgora o valores trocados\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);

    return 0;
}
