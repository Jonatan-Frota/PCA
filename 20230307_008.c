#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b;
    printf("Função de troca:\n\n");
    printf("Digite um numero: A: ");
    scanf("%f", &a);
    printf("Digite outro numero B: ");
    scanf("%f", &b);
    troca(&b, &a);

    return 0;
}

void troca(float *a, float *b){

printf("A: %1.0f\n", *a);
printf("B: %1.0f", *b);
}
