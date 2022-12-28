#include <stdio.h>
int main(){
    float MassaInicial, MassaFinal; 
    int hr, mn, s=0, d;

    printf("qual a massa inicial do elemento?\n");
    scanf("%f", &MassaInicial);
    MassaFinal = MassaInicial;

    while (MassaFinal > 0.5){
    MassaFinal -= (MassaFinal / 2);
    s = s + 50;
    }
    
    hr = s / 3600;
    d = s % 3600;
    mn = d / 60;
    s = d % 60; 

    printf("Sua massa inicial foi de %.2f\n", MassaInicial);
    printf("Sua massa final foi de %.2f\n", MassaFinal);    
    printf("O tempo decorrido foi de %d:%d:%d", hr, mn, s);
    
    return 0;
}