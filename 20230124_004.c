#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Alocando os valores pares em outro vetor:
int pares(n1){
    int i, j=0;
    int v[n1-1];
    int p[n1-1];
    printf("\nDigite uma sequ�ncia de n�meros: \n");
    for (i=1; i<=n1; i++){
        scanf("%d", &v[i]);
        if (v[i]%2 == 0){
            p[j] = v[i];
        j++;
        }}

// Impress�o dos n�meros pares:
    printf("\n---------------------------\n");
    printf("\nN�meros Pares: \n");
    for(j=0; j<= p[j]; j++){
            if (p[j]%2==0 && p[j]!= 0){
        printf("\n%d", p[j]);}}
}


// Inser��o de tamanho e verifica��o:
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam, k;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    while(tam<1 || tam>100){
    printf("O tamanho deve ser entre 1 e 100! Tente novamente: ");
    scanf("%d", &tam);
}
    k = pares(tam);

    return 0;
}
