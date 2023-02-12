#include <stdio.h>
#include <stdlib.h>


int main(){
	int tam;
	printf("digite a dimensao dos vetores: ");
	scanf("%d", &tam);
	while(tam<1){
		printf("numero invalido! Tente novamente: ");
		scanf("%d", &tam);
	}
	interno(tam);
	return 0;
}


void interno(int tam){
    int result = 0, i, x[tam], y[tam];
	for(i=0; i<tam; i+=1){
		printf("digite os valores do primeiro vetor [%d]:  ", i+1);
		scanf("%d", &x[i]);
		while(x[i]<1){
			printf("Valor deve ser positivo! Tente novamente: ");
			scanf("%d", &x[i]);
		}
	}
	for(i=0; i<tam; i+=1){
		printf("digite os valores do segundo vetor [%d]: ", i+1);
		scanf("%d", &y[i]);
		while(y[i]<1){
			printf("Valor deve ser positivo! Tente novamente: ");
			scanf("%d", &y[i]);
		}
		}
	for(i=0; i<tam; i+=1){
		result += x[i] * y[i];
	}
	printf("\n-------------------------------------\n");
	printf("\nProduto escalar: %d", result);
}
