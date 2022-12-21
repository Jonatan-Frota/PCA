#include <stdio.h>
#include <stdlib.h>

int main()
{

{
    int numero = numero + 1;
    int cont = 1;
    int spares = 0;
    int simpares = 0;
     printf("Digite uma sequencia de numeros para ver a soma de seus impares: \n");
    do {
        scanf("%d", &numero);
        cont = cont + 1;
        if (numero % 2 != 0 && numero >99 && numero < 201) {
            simpares = (simpares + numero);
        }else {
            spares = (spares + numero);
            printf("Digite numeros impares acima de 100 e menores que 200, por favor.\n");}}

    while (cont <= 50);
        printf("Soma de impares = %d\n\n", simpares);
        if (simpares == 0) {
            printf("Voce nao respeitou os criterios estabelecidos, tente novamente.\n");}
        }
        return 0;
        }
