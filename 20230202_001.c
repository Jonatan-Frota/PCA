#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{   char nomes[5][4][100], n[100];
    int i, j, verificar;
    for (i = 0; i < 5; i++){
            printf("Equipe %d:\n", i+1);
        for (j = 0; j < 4; j++){
            fgets(nomes[i][j], 100, stdin);
        }
        printf("\n");
        }

        printf("Digite um nome: ");
        fgets(n, 100, stdin);

printf("\n");
       for (i = 0; i < 5; i++){
        for (j = 0; j < 4; j++){
           verificar = strcmp(n, nomes[i][j]);
           if (verificar == 0){
            printf("Equipe %d", i+1);
           }
        }
        printf("\n");
       }
    return 0;
}
