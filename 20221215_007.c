#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("***CONVERSOR DE TEMPERATURA - Fahrenheit para Celsius***\n");
    float f, c;
    printf("Insira a temperatura em Farenheit: ");
    scanf("%f", &f);
    c = (5*(f-32)/9);
    printf("Sua temperatura de %1.1fF em Celsius eh: %1.1fC", f, c);
    return 0;
}
