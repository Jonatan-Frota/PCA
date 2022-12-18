#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("***CONVERSOR DE TEMPERATURA - CELSIUS PARA FAHRENHEIT:***\n");
    float f, c;
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("Sua temperatura de %1.1fC em Fahrenheit eh: %1.1fF", c, f);
    return 0;
}
