#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][5];

    int i, j, k;
    for (i = 0; i<3; i++){
        for (j = 0; j<5; j++){
            printf("Insira o valor %dX%d da matriz: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n\n");
    for (i = 0; i< 3; i++){
        for(j = 0; j < 5; j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
