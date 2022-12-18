#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base;
    float altura;
    printf("Digite o tamanho da base do triangulo: ");
    scanf("%f", &base);
    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);
    float a = (base*altura)/2;
    printf("A area do seu triangulo eh: %1.2f", a);
    return 0;
}
