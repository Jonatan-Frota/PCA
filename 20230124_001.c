#include <stdio.h>
#include <stdlib.h>


int verificar(int n1){
              while (n1>100||n1==0){
                printf("Digite um numero entre 1 e 100! Tente novamente: ");
                scanf("%d", &n1);
              }
              return n1;
              }
int main()
{
    int i, j;
    int tam;;
    printf("Digite o tamanho maximo do vetor: ");
    scanf("%d", &tam);
    j = verificar(tam);
    int v[j];
    printf("\nDigite %d numeros para ver a sua impressao inversa: \n", j);
    for (i=0; i<= j-1; i++){
        scanf("%d", &v[i]);
    }
    printf("\nResultado:\n");
    for(i=j-1; i>=0; i-=1){
        printf("%d\n", v[i]);
    }
    return 0;
}
