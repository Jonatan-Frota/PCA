#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m[5][5];
    int i, j, k, somal = 0, somac = 0;
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
    printf("Diagonal Principal: \n\n");
     for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
                if(i == j){
            printf(" [%d] ", m[i][j]);}
        }
    }

    printf("\n\n\n");
    printf("Diagonal Secundaria: \n\n");
    i = 0;
    j = 4;
    while(i<= 4){
    	printf(" [%d] ", m[i][j]);
    	i++;
    	j--;
	}


	printf("\n\n");
	printf("Soma - Linha 4: \n\n");
	i = 3;
	for (j = 0; j < 5; j++){
		somal += m[i][j];
		printf("%d", m[i][j]);
		if(j<4){
			printf(" + ");
		}
	}
	printf(" = %d", somal);

   	printf("\n\n\n");
	printf("Soma - Coluna 2: \n\n");
	j = 1;
	for (i = 0; i < 5; i++){
		somac += m[i][j];
		printf("%d", m[i][j]);
		if(i<4){
			printf(" + ");
		}
	}
	printf(" = %d", somac);


	 printf("\n\n\n");
    printf("Sem a Diagonal Principal: \n\n");
     for (i = 0; i<5; i++){
        for (j = 0; j<5; j++){
                if(i != j){
            printf(" [%d] ", m[i][j]);}
        }
        printf("\n");
    }
    return 0;
}
