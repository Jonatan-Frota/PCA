#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// ENTRADA:
int verificar (int n1, int n2, int verif){
    setlocale(LC_ALL, "Portuguese");
while(n1 < 100 || n2 < 28){
    printf("Parto não deverá ser realizado, reavaliar clinicamente!\n\n\n");
    break;
}
if (n1 >= 100 && n2 >= 28){
    printf("\nFeto seguro para cirurgia, passando para a próxima estapa... \n\n");}}


// VERIFICAÇÃO:
int calculo(int n1, int n2, int mes){
    mes = n2/4;
        if(n1 >= 100 && n2 >= 28){
    printf("\nPeso: %dg ", n1);
    printf("\nMeses: %d meses.\n\n", mes);
    if (mes > 7 && n1 >= 2500){
        printf("Tipo de parto: Normal.\n");
    }
    if (mes <= 7 && n1 >= 2500){
        printf("Tipo de parto: Cesariana.\n");
    }
    if (n1 >= 1500 && n1 <= 2000 && mes >= 9){
        printf("Tipo de parto: Normal.\n");
    }
    if (n1 < 2500 && mes <= 7){
        printf("Tipo de parto: Cesariana.\n");
    }

}}
int main()
{   setlocale(LC_ALL, "Portuguese");
    int a, b, v, v1, j, k;
    printf("VEJA O SEU TIPO DE PARTO:\n");
    printf("Insira o peso em gramas: \n");
    scanf("%d", &a);
    printf("Insira as semanas: \n");
    scanf("%d", &b);
    v = verificar (a, b, v1);
    k = calculo(a, b, j);
    return 0;
}
