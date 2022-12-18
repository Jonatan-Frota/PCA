#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("***Conversor de metros para centimetros*** \n");
    float mts, conversao;
    printf("Insira o seu valor em metros: ");
    scanf("%f", &mts);
    conversao = mts*100;
    printf("Seu valor de metros convertido em centimetros eh: %1.0fcm", conversao);
    return 0;
}
