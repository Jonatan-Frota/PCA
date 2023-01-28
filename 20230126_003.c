#include <stdio.h>
#include <stdlib.h>

int main()
{
    int mat[3][3];
    int i, j, k;
    printf("Insira o valor do escalar: ");
    scanf("%d", &k);
    printf("\n\n");
    for (i = 0; i<3; i++){
        for (j = 0; j<3; j++){
            printf("Insira o valor %dX%d da matriz: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    printf("\n\n");
    for (i = 0; i< 3; i++){
        for(j = 0; j < 3; j++){
            printf(" %d ", (mat[i][j])*k);
        }
        printf("\n");
    }
    return 0;
}
