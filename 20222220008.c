#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1 = 0, n2 = 0, n3 = 0, media = 0, maiornot = 0, menornot = 0, maiormed = 0, menormed = 0;
      int fim;
    printf("* CALCULO DE NOTAS *\n");
    do{
        printf("Insira a primeira, segunda e terceira nota: ");
        scanf ("%f %f %f", &n1, &n2, &n3);
        media = (n1 + n2 + n3)/3;
        if (n1 > maiornot) {
            maiornot = (maiornot - maiornot) + n1;}
        if (n2 > maiornot){
            maiornot = (maiornot - maiornot) + n2;}
        if (n3 > maiornot){
            maiornot = (maiornot - maiornot) + n3;
        }

        if (n1 < n2 && n1 < n3){
            menornot = (menornot - menornot) + n1;
        }
        if (n2 < n1 && n2 < n3){
            menornot = (menornot - menornot) + n2;
        }
        if (n3 < n1 && n3 < n2){
            menornot = (menornot - menornot) + n3;
        }
        if (media > maiormed){
            maiormed = (maiormed - maiormed) + media;
        }
        if (menormed <= menormed) {
            menormed = (menormed - menormed) + media;
        }
        printf("Deseja continuar e realizar o processo novanente?\n");
        printf("1 - [sim]\n");
        printf("2 - [nao]\n");
        scanf("%d", &fim);
    } while (fim == 1);
        printf("Maior nota: %1.2f\n", maiornot);
        printf("Menor nota: %1.2f\n", menornot);
        printf("\nMaior media: %1.2f\n", maiormed);
        printf("Menor media: %1.2f", menormed);
    return 0;
}
