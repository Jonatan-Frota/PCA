#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Verificação para valores inválidos:
int verificar (n1){
while (n1 < 1){
    printf("Vetores não podem ser negativos e nem nulos! Tente novamente: ");
    scanf("%d", &n1);
}
return n1;
}


// Cálculo e inserção de coordenadas:
int valores (n1){
    int i, j, k, pe = 0;
    int v1[n1];
    int v2[n1];
printf("Selecione as coordenadas do primeiro vetor: \n");
for (i=1; i <= n1; i++){
    scanf("%d", &v1[i]);
    while (v1[i] < 1){
        printf("As coordenadas tem que ser positivas! Tente novamente: ");
        scanf("%d", &v1[i]);
    }
}
printf("Selecione as coordenadas do segundo vetor: \n");
for (i = 1; i <= n1; i++){
    scanf("%d", &v2[i]);
    while (v2[i] < 1){
        printf("As coordenadas tem que ser positivas! Tente novamente: ");
        scanf("%d", &v2[i]);
    }
}
    for (i = 1; i <= n1; i++){
    pe += (v1[i]*v2[i]);
}
printf("%d", pe);
return pe;
}



// Main:
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int tam;
    int i, j, k;
    printf("Produto escalar:\n");
    printf("Selecione o tamanho dos vetores A e B: ");
    scanf("%d", &tam);
    j = verificar(tam);
    k = valores(j);
    printf("\nO produto externo é: %d", k);
    return 0;
}
