#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tam, i = 1;
        printf("Digite o tamanho do vetor: ");
        scanf("%d", &tam);
        printf("\n");

    int v[tam];
    int *pv = &v;

    for (pv = &v[0]; pv < &
    v[tam]; pv++){
        printf("Digite o elemento %d do vetor: ", i);
        scanf("%d", &*pv);
        i++;
    }

    minmax(v, tam, &v[0], &v[tam-1]);

    return 0;
}

void minmax(int v[], int tam, int *pmin, int *pmax){
int i;
printf("\n\nVetor:\n");
for (i = 0; i < tam; i++){
    printf("%d ", v[i]);
}

printf("\n\nValor minimo: %d\n", *pmin);
printf("Valor maximo: %d", *pmax);
}

