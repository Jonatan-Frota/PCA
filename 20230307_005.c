#include <stdio.h>
#include <stdlib.h>

int main()
{
    int maior, meio, menor, j;

    printf("Digite os valores para serem ordenados: \n");
    scanf("%d", &maior);
    scanf("%d", &meio);
    scanf("%d", &menor);

   j = ordenar(maior, meio, menor);

   printf("\n%d", j);

}

int ordenar(int maior, int meio, int menor){
int *pmaior = &maior;
int *pmeio = &meio;
int *pmenor = &menor;
int vet[3], i, j, aux;
vet[0] = maior;
vet[1] = meio;
vet[2] = menor;

//RETORNANDO 0 CASO OS VALORES SEJAM IGUAIS:
if (vet[0] == vet[1] && vet[0] == vet[2]){
   return 1;
}

// LOGICA PARA ORDENAR O VETOR E ATRIBUIR AS VARIAVEIS:
for (i = 0; i < 3; i++){
    for (j = 0; j < 3 - i - 1; j++){
        if (vet[j] < vet[j+1]){
            aux = vet[j];
            vet[j] = vet[j+1];
            vet[j+1] = aux;
        }
        }}


// TROCANDO VALOR DAS VARIAVEIS ATRAVES DOS PONTEIROS:
*pmaior = vet[0];
*pmeio = vet[1];
*pmenor = vet[2];

printf("\n\nOrdenado de forma decrescente: \n\nMaior: %d\n", maior);
printf("Meio: %d\n", meio);
printf("Menor: %d\n", menor);

return 0;
}
