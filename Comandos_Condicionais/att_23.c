#include <stdio.h>
#include <locale.h>
#include <math.h>

/* Escreva um algoritmo para calcular as raízes de uma equaço do 2º grau pela fórmula
   x = (−b ± √D) / 2a, onde D = b²– 4ac é o discriminante da equação. */
// a) Se D < 0, não há solução real, pois não existe raiz quadrada de número negativo. 
// b) Se D = 0, há duas soluções iguais: x1 = x2 = −b / 2a.
// c) Se D > 0, há duas soluçõoes reais e diferentes: x1 e x2.

int main(){
    setlocale(LC_ALL, "Portuguese");

    int x1, x2, a, b, c, D, raiz;

    printf("Uma equação do 2º grau é uma expressão na forma ax² + bx + c = 0\n");
    printf("Digite o Coeficiente Quadrático (a): ");
    scanf("%d", &a);
    printf("Digite o Coeficiente Linear (b): ");
    scanf("%d", &b);
    printf("Digite o Termo Independente (c): ");
    scanf("%d", &c);

    D = (b * b) - (4 * a * c);
    raiz = sqrt(D);
    x1 = (-b + raiz) / (2 * a);
    x2 = (-b - raiz) / (2 * a);

    if (D < 0) {
        printf("Não existe raiz real!\n");
    } else if (D == 0) {
        printf("Ambas as raízes são iguais!\n");
        printf("As raízes são iguais a: %d", x1);
    } else{
        printf("As raízes são diferentes!\n");
        printf("A primeira raiz é: %d\n", x1);
        printf("A segunda raiz é: %d\n", x2);

    }

    return 0;
}
