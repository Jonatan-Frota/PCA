#include <stdio.h>
#include <stdlib.h>

int main()
{
float a = 10;
float b = 50;
printf("Antes da Troca: \n");
printf("A: %1.0f\n", a);
printf("B: %1.0f\n\n", b);


troca(&a, &b);

printf("Depois da troca: \n");
printf("A: %1.0f\n", a);
printf("B: %1.0f", b);

    return 0;
}

void troca(float *a, float *b){
float guardar = *a;

*a = *b;
*b = guardar;

}
