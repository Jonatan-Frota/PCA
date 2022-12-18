#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float n3, calculo1, calculo2, calculo3;
    printf("Insira o primeiro numero inteiro: ");
    scanf("%i", &n1);
    printf("Insira o segundo numero inteiro: ");
    scanf("%i", &n2);
    printf("Agora insira um terceiro numero real qualquer:");
    scanf("%f", &n3);
    printf("------------------------------------------\n");

    calculo1 = ((2*n1) * (1.0*n2/2));
    calculo2 = (n1*3)+n3;
    calculo3 = (n3*n3*n3);

    printf("O produto do dobro do primeiro com metade do segundo: %1.1f\n\n", calculo1);
    printf("A soma do triplo do primeiro com o terceiro: %1.1f\n ",calculo2);
    printf("\nO terceiro numero ao cubo: %1.1f \n", calculo3);
    return 0;
}
