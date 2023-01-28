#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int mat[3][3];
    int i, j, k, v = 0;
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            printf("Insira o valor %dX%d da matriz: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n\n");
    printf("Insira o valor a ser encontrado: ");
    scanf("%d", &k);
    printf("\n\n");
    for (i = 0; i< 3; i++){
        for(j = 0; j < 3; j++){
            if(mat[i][j] == k){
                    v = 1;
                printf("\n%d é encontrado em: %dx%d", k, i+1, j+1);
            }
        }
    }
    if (v == 0){
        printf("Valor não encontrado.");
    }
    printf("\n");
    return 0;
}
