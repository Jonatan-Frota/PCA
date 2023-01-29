#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5];
    int i, j, k;
    int somad = 0, somac = 0, somal = 0, somads = 0;
    for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf("Digite o valor da matriz em %dX%d: ", i+1,j+1);
            scanf("%d", &m[i][j]);
        }
    }

    printf("\n\n");
    printf("Sua Matriz: \n\n");
     for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
            printf(" [%d] ", m[i][j]);}
            printf("\n");
        }

    printf("\n\n\n");
     for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
                if(i == j){
            somad += m[i][j];}
        }
    }

    printf("\n\n\n");
    i = 0;
    j = 4;
    while(i<= 4){
    	somads += m[i][j];
    	i++;
    	j--;
	}

	for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            somal += m[i][j];
        }}


	for (j = 0; j < 5; j++){
        for (i = 0; i < 5; i++){
            somac += m[i][j];
        }
	}
	printf("\nSoma de colunas: %d\nSoma de linhas: %d\nSoma da diagonal principal: %d\nSoma da diagonal secundaria: %d", somac/5, somal/5, somad, somads);
	printf("\n\nResultado: \n");
	if(somads && somal/5 && somac/5 == somad){
    printf("Quadrado Magico!\n");}
    else{
        printf("A matriz NAO eh um quadrado magico.\n");
    }



    return 0;
}
