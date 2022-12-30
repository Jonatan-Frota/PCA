#include <stdio.h>
int main(){
	float i, j=1;
	float soma=0;
	for(i=1; i<=50;i++){
		soma = (j/i) + soma;
		j=j+2;
	}
	printf("soma = %f\n", soma);
	return 0;
}
