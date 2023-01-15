#include <stdio.h>
#include <math.h>
#include <locale.h>

//VERIFICAÇÃO DE ENTRADA:
float solicitar(float n){
    while(n< 0 || n>1){
        printf("O numero deve estar entre 0 e 1! Tente novamente: ");
        scanf("%f", &n);
}
return n;
}


//FUNÇÃO ARCTAN:
double arctan(float x){
float a, b, c = 0, soma = 0;
int i;
double n = -1, m = 0;

do{
     n+=2;
     a =  pow(x, n)/n;
     //printf("\n%f --", a);
     n+=2;
     b = pow(x,n)/n;
     c = a - b;
     soma = soma + c;
     }while(b>0.0001);
     return soma;
}


// FUNÇÃO MAIN:
int main()
{
float x;
float j, k;

printf("Digite um numero entre 0 e 1: ");
scanf("%f", &x);
j = solicitar(x);
k = arctan(j);
printf("\nArcTan de %1.1f eh aproximadamente: %f", j, k);

  return 0;
}

