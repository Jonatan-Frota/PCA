#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void mediaDesvio(float *notas, int qntalunos, float *pmedia, float *pdesvio);

int main()
{
    int qntalunos, cont = 0;
    float media = 0, desvio = 0;
    float* notas;

    printf("Digite a quantidade de alunos: ");
    scanf("%d", &qntalunos);

    while(qntalunos <= 0){
        printf("Digite uma quantidade VALIDA de alunos: ");
        scanf("%d", &qntalunos);
    }

    notas = (float*) malloc(qntalunos * sizeof(float));

printf("\n");

    if (notas != NULL){
        while(cont < qntalunos){
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[cont]);
        cont++;
        }
    }

mediaDesvio(&notas[0], qntalunos, &media, &desvio);

printf("\nMedia dos alunos: %1.2f", media);
printf("\n\nDesvio Padrao: %1.4f\n", desvio);

    return 0;
}

void mediaDesvio(float *notas, int qntalunos, float *pmedia, float *pdesvio){
int i;
float soma = 0, media, numerador = 0;
float *pontaux = notas;

// MEDIA:
for (i = 0; i < qntalunos; i++){
    soma += *pontaux++;
}
*pmedia = soma/i;
media = soma/i;

// DESVIO PADRAO:
pontaux = notas;
for (i = 0; i < qntalunos; i++){
    numerador += pow(*(pontaux + i) - *pmedia, 2) / qntalunos;

}
*pdesvio = sqrt(numerador);
}
