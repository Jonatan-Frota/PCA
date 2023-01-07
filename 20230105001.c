#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// INTERVALO:
int ScanIntIntervalo (int n1){
while(n1 < 0 || n1 > 1000){
    printf("INSIRA UM NUMERO NO INTERVALO: \n");
    scanf("%d", &n1);}
}


// PERCENTUAL:
float percentual (float n1, float n2, float percent){
if (n1 < n2){
    percent = (n1*100)/n2;}
else {
    percent = (n2*100)/n1;}
}


// DIFERENÇA DOS DOIS:
int absdif (int n1, int n2, int dif){
if (n1 > n2){
    dif = (n1 - n2);}
else {
    dif = n2 - n1;}
    }


int main()
{
setlocale(LC_ALL, "Portuguese");
int x, y, z, k, p, d;
printf("Insira um numero e veja se ta no intervalo: \n");
scanf("%d", &x);
z = ScanIntIntervalo (x);
scanf("%d", &y);
k = ScanIntIntervalo (y);
printf("Número 1: %d\nNúmero 2: %d\n", z, k);
p = percentual(z, k, p);
printf("Percentual = %d%%\n", p);
d = absdif(z, k, d);
printf("A diferença dos dois é de: %d números.", d);
    return 0;
}
