#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{   setlocale(LC_ALL, "Portuguese");
    printf("Insira uma série de números impares e pares para ver sua soma: \n");
    printf("*Digite um número maior que 1000 para finalizar*\n");
    int somapares = 0,somarimpares = 0,numero = 0;
    while (numero < 1000){
        scanf("%d",&numero);
        if (numero < 1000){
        if (numero % 2 == 0){
            somapares = somapares + numero;
            }
        if (numero % 2 != 0) {
            somarimpares = somarimpares + numero;
        }
        }


    }
    printf("Soma dos numeros pares: %d \n Soma dos numero impares: %d",somapares,somarimpares);
}

