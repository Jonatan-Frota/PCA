#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, k, soma, r = 0;

    printf("Digite o numero de itinerarios: ");
    scanf("%d", &n);
    int m[n][n];
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("Digite a quantidade de cidades para o itinerario %dx%d: ", i+1, j+1);
            scanf("%d", &m[i][j]);
        }
    }
    printf("\n\nSeu itinerario: \n\n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf(" %d ", m[i][j]);
        }
         printf("\n");
    }
    printf("\n\nDigite o numero de itinerarios que ira passar considerando a origem: ");
    scanf("%d", &k);
    printf("\n\n");
    printf("\n\nDigite a origem: ");
    scanf("%d" ,&r);
    printf("\n\n");
    i = 0;
    while(i<k-1){
        j = r;
        printf("Digite a rota %d: ", i+1);
        scanf("%d", &r);
        while (r>k-1){
            printf("Valor invalido. Tente novamente: ");
            scanf("%d", &r);
        }
        printf("\n[%dx%d] = %d", j, r, m[j][r]);
        soma += m[j][r];
        printf("\nSoma: %d\n\n", soma);
        i++;
    }
    printf("\n\nCusto do itinerario: %d", soma);

    return 0;
}
