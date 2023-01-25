#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int inversao(n1){
    int i;
    int v[n1-1];
    printf("\nDigite uma sequência de números: \n");
    for (i=1; i<=n1; i++){
        scanf("%d", &v[i]);
    }
    printf("\n------------------------------------------\nSua sequência inversa: \n");
    for (i=n1;i>=1; i--){
        printf("\n%d", v[i]);
    }
}



int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam, j, i, k;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);
    while(tam<1 || tam>100){
    printf("O tamanho deve ser entre 1 e 100! Tente novamente: ");
    scanf("%d", &tam);
}
    k = inversao(tam);

    return 0;
}
