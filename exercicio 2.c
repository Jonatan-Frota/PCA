#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Insira o seu salario atual: R$");
    scanf("%f", &salario);
    float reajuste = 0.1*salario;
    float total = reajuste + salario;
    printf("O seu salario agora sera de R$%1.2f", total);
    return 0;
}
