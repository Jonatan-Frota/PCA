#include <stdio.h>
#include <stdlib.h>

// Função para o Selection Sort:

int selection_sort (int vetor[],int max) {
  int i, j, min, aux;

  for (i = 0; i < (max - 1); i++) {
    min = i;
    for (j = i+1; j < max; j++) {
      if (vetor[j] < vetor[min]) {
   min = j;
      }
    }
    if (i != min) {
      aux = vetor[i];
      vetor[i] = vetor[min];
      vetor[min] = aux;
    }
  }
  printf("\n\nVetor ordenado: \n\n");
  for(i = 0; i < max; i++) {
    printf ("[%d] ",vetor[i]);
  }
  printf ("\n");
}

// Função Main - Entrada e verificação de tamanho:

main () {
  int max, i;
  printf("Insira o tamanho do vetor: ");
  scanf("%d",&max);
  while (max < 1){
         printf("O tamanho nao pode ser nulo e nem negativo! Tente novamente: ");
         scanf("%d", &max);
          }
  int vetor[max];
    printf("\nInsira os valores do vetor:\n" );
  for(i = 0; i < max; i++) {
    scanf("%d",&vetor[i]);
  }

  selection_sort (vetor, max);

}
