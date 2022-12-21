#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero = numero + 1;
    int cont = 1;
    int spares = 0;
    int simpares = 0;
    do {
        printf("Digite um numero inteiro impar ou par para ver a soma de ambos os casos: \n");
        scanf("%d", &numero);
        cont = cont + 1;
        if (numero % 2 != 0) {
            simpares = (simpares + numero);
        }else {
            spares = (spares + numero);}}
    while (cont <= 50);
        printf("Soma de impares = %d\n", simpares);
        return 0;
        }



