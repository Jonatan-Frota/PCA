#include <stdio.h>
#include <stdlib.h>

int main()
{
    char modelo [5][1][100];
    int i, j, k = 0, custo[5][1], economico = 10000;
    for(i = 0; i < 5; i++){
        for(j = 0; j <1; j++){
            printf("Digite o modelo do carro %d: ", i+1);
            scanf("%s", &modelo[i][j]);
            printf("Km/L: ");
            scanf("%d", &custo[i][j]);
            if (custo[i][j] < economico){
                economico = custo[i][j];
            }
        }
    }
    printf("\n");

    for (i = 0; i < 5; i++){
        for (j = 0; j < 1; j++){
            if (custo[i][j] == economico){
                    if(k<1){
                printf("Modelo mais economico: %s - %dkm/L", modelo[i][j], custo [i][j]);
                k++;}
            }
        }
    }
    printf("\n\nGasto a cada 1.000km: \n\n");
for (i = 0; i<5; i++){
    for (j = 0; j < 1; j++){
        printf("%s: %dL a cada 1.000km\n", modelo[i][j], 1000/custo[i][j]);
    }
}


    return 0;
}
