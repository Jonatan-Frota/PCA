#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int soma(int n){
int i, j, s;
int m1[n][n], m2[n][n], m3[n][n];
for (i = 0; i < n; i++){
    for (j = 0; j< n; j++){
        printf("Digite o valor da matriz 1 em %dx%d: ", i+1, j+1);
        scanf("%d", &m1[i][j]);
    }
}
printf("\n\n");

for (i = 0; i < n; i++){
    for (j = 0; j< n; j++){
        printf("Digite o valor da matriz 2 em %dx%d: ", i+1, j+1);
        scanf("%d", &m2[i][j]);
    }
}
for (i = 0; i< n; i++){
    for (j = 0; j< n; j++){
       m3[i][j] =  m1[i][j] + m2[i][j];
    }
}
printf("\n ------------------ SOMA ----------------------- \n\n");
for (i = 0; i< n; i++){
    for (j = 0; j< n; j++){
       printf(" %d ", m3[i][j]);
    }
    printf("\n");
}}


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n, j;
    printf("Digite o tamanho das matrizes que serão somadas: ");
    scanf("%d", &n);
    j = soma(n);

    return 0;
}
