#include <stdio.h>
#include <stdlib.h>

int main()
{
    int soma = 0;
    int i;
    int numero;
    printf("*** Soma de 5 numeros ***\n");
    for (i = 1; i <= 5; i++){
        printf("Digite um numero: \n");
        scanf("%i", &numero);
        soma = soma + numero;

    }
        printf("Resultado = %i", soma);
    }
