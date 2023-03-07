#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor[8], i = 0;
    int *ponteiroVet;
    printf("Digite os 8 elementos do vetor:\n\n");
for (ponteiroVet = &vetor[0]; ponteiroVet < &vetor[8]; ponteiroVet++){
    i++;
        printf("Elemento %d: ", i);
        scanf("%d", &*ponteiroVet);
}
printf("\nO dobro dos valores digitados:\n\n");
for (ponteiroVet = &vetor[0]; ponteiroVet < &vetor[8]; ponteiroVet++){
    printf("%d ", *ponteiroVet*2);
}
printf("\n\nO endereco de todos os valores pares:\n\n");

for (ponteiroVet = &vetor[0]; ponteiroVet < &vetor[8]; ponteiroVet++){
        if (*ponteiroVet%2 == 0){
    printf("%d\n", &*ponteiroVet);
        }
}
    return 0;
}
