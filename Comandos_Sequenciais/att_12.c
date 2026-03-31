#include <stdio.h>
#define m1 ((7 + 8 + 9) / 3)
#define m2 ((4 + 5 + 6) / 3)
#define mm (m1 + m2) / 2.0
// m1 é 1° média, m2 é 2° média e mm é média das médias.

int main(){

    printf("A primeira media e entre os numeros 7, 8 e 9.\n");
    printf("A segunda media e entre os numeros 4, 5 e 6.\n\n");
    printf("A soma da primeira media com a segunda e: %d\n", m1 + m2);
    printf("E a media entre as 2 medias e igual a: %.1f\n", mm);

    return 0;
}
