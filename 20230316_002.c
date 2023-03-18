#include <stdio.h>
#include <stdlib.h>

int main()
{
    int** pm;
    int linha, coluna, i, j;

printf("Digite o a quantidade de linhas da matriz: ");
scanf("%d", &linha);
printf("Digite a quantidade de colunas da matriz: ");
scanf("%d", &coluna);

// ALOCANDO ESPAÇO:
pm = (int**) malloc(linha*sizeof(int*));
for (i = 0; i < linha; i++){
pm[i] = (int*) malloc(coluna*sizeof(int));
}
printf("\n");

//ENTRADA DE DADOS:
for (i = 0; i < linha; i++){
        for (j = 0; j < coluna; j++){
    printf("Digite o valor %dx%d: ", i+1, j+1);
    scanf("%d", (*(pm+i)+j));
    }
}
printf("\n\n");

//PRINTANDO COM ARITMETICA DE PONTEIROS:
for (i = 0; i < linha; i++){
    for (j = 0; j < coluna; j++){
        printf("%d ", *(*(pm+i)+j));
    }
    printf("\n");
}


// PRINTANDO POR INDICE:
printf("\n\nIndice: \n\n");
for (i = 0; i < linha; i++){
    for(j = 0; j < coluna; j++){
        printf("%d ", pm[i][j]);
    }
    printf("\n");
}

//LIBERANDO MEMORIA:
free(pm);

    return 0;
}
