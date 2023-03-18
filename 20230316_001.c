#include <stdio.h>
#include <stdlib.h>

//Função para alocar valores:
int* alocar(int *ptam){
    int vtam, i;
    int *pv;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &vtam);

    while(vtam <= 0){
        printf("Digite um valor valido! Tente de novo: ");
        scanf("%d", &vtam);
    }

    pv = (int*) malloc (vtam * sizeof(int));

    if (pv != NULL){
        for(i = 0; i < vtam; i++){
            printf("Digite o elemento do vetor: ");
            scanf("%d", pv + i);
        }
    }
    *ptam = vtam;
    return pv;
}

// Função de Comparação:
void comparar(int *pvc, int pvctam, int *pmaior, int *pmenor){

    int i, j;
    int maior = *pvc;
    int menor = *pvc;

    //Maior:

    for(i = 0; i < pvctam; i++){
            for (j = i+1; j < pvctam; j++){
                if(*(pvc+j)>*(pvc+i) && *(pvc+j) > maior){
                    maior = *(pvc+j);

                }}}

    //Menor:

      for(i = 0; i < pvctam; i++){
            for (j = i+1; j < pvctam; j++){
                if(*(pvc+j)<*(pvc+i) && *(pvc+j) < menor){
                    menor = *(pvc+j);

                }}}

    *pmaior = maior;
    *pmenor = menor;
}

int main()
{
    int tam;
    int *v;
    int maior;
    int menor;

    v = alocar(&tam);
    comparar(v, tam, &maior, &menor);


printf("\nMaior: %d\nMenor: %d", maior, menor);

free(v);

    return 0;
}
