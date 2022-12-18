#include <stdio.h>
#include <stdlib.h>

int main()
{
    int horas;
    float salario, calculo;
    printf("Quantas horas voce trabalha por mes? ");
    scanf("%d", &horas);
    printf("Quanto voce ganha por hora trabalhada? ");
    scanf("%f", &salario);
    calculo = salario*horas;
    printf("Voce recebera R$%1.2f este mes.", calculo);
    return 0;
}
