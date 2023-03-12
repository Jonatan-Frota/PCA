#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[10] = {7, 2, 7, 4, 9, 2, 6, 1, 2, 8};
    int i, tam, valor;
    printf("----------------- TESTE ---------------------------\n\n");
    int *j = encontrar(&v[0], &v[10], 2);
    printf("\n\nPrimeira ocorrencia: %d", j);

printf("\n\n\n------------------- CASOS GERAIS --------------------- \n\n");
    printf("\nInsira o tamanho do vetor: ");
    scanf("%d", &tam);
    printf("\n");
    for (i = 0; i < tam; i++){
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%d", &v[i]);
    }
    printf("\nInsira o valor a ser encontrado: ");
    scanf("%d", &valor);
    int *k = encontrar(&v[0], &v[tam], valor);
    printf("\nPrimeira ocorrencia: %d", k);
    return 0;
}

int encontrar(int *p1, int *p2, int valor){
int i = 0;
int* a = NULL;

printf("\nOcorrencias:\n");

for(p1 = &*p1; p1 < &*p2; p1++){
    if(*p1 == valor && i == 0){
        i++;
        a = &*p1;
    }
    if(*p1 == valor){
            printf("%d\n", &*p1);
    }
}
if(a == NULL){
    return NULL;
}
return a;

}
