#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("*** CALCULO DE PESO IDEAL ***\n");
    float altura, calculo;
    printf("Insira a sua altura: ");
    scanf("%f", &altura);
    calculo = (72.7*altura)-58;
    printf("Seu peso ideal eh de: %1.1fkg.", calculo);
    return 0;
}
