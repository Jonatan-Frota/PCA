#include <stdio.h>
#include <math.h>
#define E 0.1
int main(){
	float xi, xf, a, b, raiz, y;
	//problema = com 6 digitos a raiz fica diferente, mas acho que � pq esse metodo eh so uma aproximacao
	
	scanf("%f", &y);
	while(y<=0){
		printf("nao eh possivel calcular raiz quadrada de numero negativo\n");
		printf("alem disso, o metodo nao funciona com o numero zero pois gera uma indeterminacao matematica\n");
		printf("tente novamente.\n");
		scanf("%f", &y);
	}
	xi = y/2;
	do{
		xf = xi - (((xi*xi)-y)/(2*xi));
		a = xf;
		b = xi;
		xi = xf; 
	} while(fabs(a-b)>E);
	    raiz = sqrt(y);
		printf("resultado com o metodo = %f\n", xf);
		printf("resultado a partir da biblioteca = %f", raiz);
	return 0;
}
