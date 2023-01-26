#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam, n, i, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, c6 = 0;
    printf("Selecione a quantidade de vezes que o dado foi lançado: ");
    scanf("%d", &tam);
    int v[tam];
    for (i = 1; i <= tam; i++){
        printf("Digite o valor da face: ");
        scanf("%d", &v[i]);
        while(v[i] < 1 || v[i]> 6){
            printf("Um dado comum só tem 6 lados. Tente novamente: ");
            scanf("%d", &v[i]);
        }
        if (v[i] == 1){
            c1 = c1 + 1;
        }
        if (v[i] == 2){
            c2 = c2 + 1;
        }
        if (v[i] == 3){
            c3 = c3 + 1;
        }
        if (v[i] == 4){
            c4 = c4 + 1;
        }
        if (v[i] == 5){
            c5 = c5 + 1;
        }
        if (v[i] == 6){
            c6 = c6 + 1;
        }

    }
    if(c1 > 1){
    printf("\nA face 1 apareceu: %d vezes", c1);}
    if(c2 > 1){
    printf("\nA face 2 apareceu: %d vezes", c2);}
    if(c3 > 1){
    printf("\nA face 3 apareceu: %d vezes", c3);}
    if(c4 > 1){
    printf("\nA face 4 apareceu: %d vezes", c4);}
    if(c5 > 1){
    printf("\nA face 5 apareceu: %d vezes", c5);}
    if(c6 > 1){
    printf("\nA face 6 apareceu: %d vezes", c6);}

 return 0;

}
