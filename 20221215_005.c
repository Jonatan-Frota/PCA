#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("***CALCULO DA AREA DE UM QUADRADO COM O SEU DOBRO***\n");
    float base, area, dobro;
    printf("Insira a base do quadrado: ");
    scanf("%f", &base);
    area = base*base;
    dobro = 2*area;
    printf("A area do seu quadrado eh de: %1.1f\n", area);
    printf("O seu dobro eh: %1.1f", dobro);
    return 0;
}
