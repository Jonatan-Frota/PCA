#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int i = 1, j, tam, tam2;

    printf("Soma de arrays: \n\n");
    printf("Qual o tamanho do primeiro vetor? ");
    scanf("%d", &tam);
    printf("Qual o tamanho do segundo vetor? ");
    scanf("%d", &tam2);

    int v1[tam], v2[tam2];
    int *pv1 = &v1;
    int *pv2 = &v2;
printf("\n\n");
    for (pv1 = &v1[0]; pv1 < &v1[tam]; pv1++){
        printf("Insira o elemento %d do vetor 1: ", i);
        scanf("%d", &*pv1);
        i++;
    }
    printf("\n");
i = 1;
    for (pv2 = &v2[0]; pv2 < &v2[tam2]; pv2++){
        printf("Insira o elemenbto %d do vetor 2: ", i);
        scanf("%d", &*pv2);
    i++;
    }

j = soma(v1, tam, v2, tam2);

printf("\n\n%d", j);
    return 0;
}

int soma(int v1[], int tam, int v2[], int tam2){
    int i;
    int v3[tam];
if(tam != tam2){
    return 0;
}
for (i = 0; i < tam; i++){
    v3[i] = v1[i] + v2[i];}

int *pv3 = &v3;
printf("\nResultado:\n");
for (pv3 = &v3[0]; pv3 < &v3[tam]; pv3++){
    printf("%d ", *pv3);
}
return 1;

}
