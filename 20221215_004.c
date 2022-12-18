#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("***CALCULO DE AREA DA CIRCUNFERENCIA***\n");
    float raio, area;
    printf("Insira o raio da circunferencia: ");
    scanf("%f", &raio);
    area = 3.14*(raio*raio);
    printf("A area da circunferencia eh: %1.2f", area);
    return 0;
}
