#include <stdio.h>
#include <stdlib.h>


// Logica de Interseccao:

void interseccao(int v[], int tam, int quantia){
int i, j, k, l = 0;

    // Saber quais valores se repetem:
for (i = 1; i < tam; i++){
k = 0;
 for (j = i+1; j < tam; j++){
    if (v[i] == v[j]){
            k++;
        if(k == quantia - 1){
                l++;
        }}}}

    // Atribuir esses valores a um novo vetor Inter:
int inter[l+1];
inter[0] = l;
l = 0;
for (i = 1; i < tam; i++){
k = 0;
 for (j = i+1; j < tam; j++){
    if (v[i] == v[j]){
            k++;
        if(k == quantia - 1){
                l++;
            inter[l] = v[j];
        }}}}


    // Print:

printf("\n\n");
printf("------------ Conjunto Inter -------------------\n\n");
printf("[%d] ", inter[0]);
for (i = 1; i < l+1; i++){

    printf("%d ", inter[i]);
}
    //Assim como pedido, a posicao [0] contem o tamanho do vetor interseccao.
printf("\n\n*O primeiro elemento eh o tamanho do conjunto interseccao*\n\n");
}




// Entrada de dados (Main):

int main()
{
    int n, c = 1;
    int i;

    printf("Digite a quantidade de vetores: ");
    scanf("%d", &n);

    // Verificar se a quantidade de vetores eh valida:
    while(n <= 1){
        printf("Valor invalido! Tente novamente: ");
        scanf("%d", &n);
    }
    printf("\n");

    // Entrada do tamanho de cada vetor:
int tamanho[n];
for (i = 0; i< n; i++){
    printf("Digite o tamanho do vetor %d: ", i+1);
    scanf("%d", &tamanho[i]);
    c += tamanho[i];

    // Filtro da quantidade maxima de elementos dentro dos vetores:
    if (tamanho[i] > 100){
        printf("O tamanho deve ser menor que 100!");
        return 1;
    }
}

    // Entrada de valores nos vetores:
int vt[c];
vt[0] = c;
printf("\n");
for (i = 1; i < c; i++){
        printf("Digite os valores dos vetores: ");
        scanf("%d", &vt[i]);
}
printf("\n\n");

    // Chamada de funcao:
interseccao(vt, c, n);


    return 0;
}
