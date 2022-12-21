#include <stdio.h>
#include <stdlib.h>
int main()
{   int maior = 0, menor = 0, aux = 0, i = 0, x = 1;
    do {
        printf("Digite um numero: \n");
        scanf("%d", &aux);
        if(aux < 0){
            printf("Insira somente valores positivos!\n");
            break;
        }
        if (i==0){
            maior = aux;
            menor = aux;
            i++;
        }
        else if (aux > maior) {
            maior = aux;
        }
        else if (aux < menor) {
            menor = aux;

        }
        x++;
    } while (x <= 20);
    printf("Maior = %d\n", maior);
    printf("Menor = %d", menor);
    return 0;

}
