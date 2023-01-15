#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nota, media = 0, i=0, maior = 0, menor = 0;
    printf("Calculo de medias: \n");
    do{
    printf("Insira uma nota: ");
    scanf("%d", &nota);
    if(nota<0){
        break;
    }
    i++;
    if (i == 1){
        menor = nota;
    }

    media = media + nota;
    if (nota > maior){
        maior = (maior - maior) + nota;
    }
    if (nota < menor){
        menor = (menor - menor) + nota;
    };
    } while(nota>= 0);
    printf("\nMedia geral da turma: %1.1f", (media*1.0)/i);
    printf("\nMaior nota: %d", maior);
    printf("\nMenor nota: %d", menor);

    return 0;
}
