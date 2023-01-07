#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// ENTRADA DE DADOS
int fib(int n){
int fn;
int num1 = 0, num2 = 1, result = 0, i;

// TRATAMENTO DE INSERÇÃO DE NÚMEROS NEGATIVOS:
while (n < 1){
    printf("\nInsira valores maior ou igual a 1.\nTente novamente: ");
    scanf("%d", &n);
}
// CASOS DE N = 1 E N = 2:
if ( n == 1 || n == 2){
    printf("\nFibonacci = 1.");
}
// CÁLCULO DE POSIÇÃO:
else{
for (i= 1; i< n-1; i++){
        fn = num1 + num2;
        num1 = num2;
        num2 = fn;
        fn = num1 + num2;
}
printf("\nFibonacci = %d.\n", fn);
}}

// PRINCIPAL:
int main()
{
    setlocale(LC_ALL, "Portuguese");
    int x, y, z;
    printf("Sequência de Fibonacci:\n");
    printf("Insira a posição: ");
    scanf("%d", &x);
    y = fib(x);
    return 0;
}
