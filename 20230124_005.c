#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fatorial:
int fatorial(n1){
    int i, j, k=1, nf;
    int v[n1-1];
    printf("\nDigite uma sequ�ncia de n�meros: \n");
    for (i=1; i<=n1; i++){
        scanf("%d", &v[i], &nf);
        for (j = v[i]-1; j > 0; j--){
            v[i] *= j;
        }
    }

// Print:
    printf("\nFatorial: \n");
    for (i = 1; i <= n1; i++){
        printf("\n%d", v[i]);
    }
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
    k = fatorial(tam);

    return 0;
}
