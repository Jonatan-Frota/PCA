#include <stdio.h>
#include <stdlib.h>

int main()
{
    float v1[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10};
    float v2[6] = {10, 20, 30, 40, 50, 60};
    float v3[16] = {1, 1.5, 2, 2.5, 3, 3.5, 4, 4.5, 5, 5.5, 6, 6.5, 7, 7.5, 8, 8.5};

printf("Vetor 1:\n");
imprimir(&v1[0], &v1[10]);
printf("\n\nVetor 2:\n");
imprimir(&v2[0], &v2[6]);
printf("\n\nVetor 3:\n");
imprimir(&v3[0], &v3[16]);

    return 0;
}



void imprimir(float *pv1, float *pv2){

printf("Parte 1: ");
for (pv1 = pv1; pv1 < pv2 - 4; pv1++){
    printf("%1.1f ", *pv1);
}
printf("\n");
printf("Parte 2: ");
for (pv1 = pv1; pv1 < pv2; pv1++){
    printf("%1.1f ", *pv1);
}
}
