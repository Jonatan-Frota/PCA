#include <stdio.h>
#include <math.h>

int main(){
    int num, i, cubo, numeros, sequencia, sequencia2, k, j;
    printf("qual o numero que sera cubado?\n");
    scanf("%d", &num);
    for(j = num; j>0; j-=1){
    	cubo = j * j * j;
    	printf("Cubo = %d\n\n", cubo);
    	sequencia = (cubo/j);
    	k = (j-1)/2;
    	//int V[num*2+1];
    	if (cubo % 2 != 0){
        	for(i = (-1) * k; i < k + 1; i += 1){
                	sequencia2 = sequencia - (i * 2);
            	    printf("%d ", sequencia2);
        	}
    	}
    	if (cubo % 2 == 0){
        	for(i = (-1) * k - 1; i < k + 1 ; i += 1){
        	    sequencia2 = (sequencia - 1) - (i * 2);
            	printf("%d ", sequencia2);
        	}

    	}
    	printf("\n-----------------------------------/\n");
	}
}
