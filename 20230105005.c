#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// ENTRADA DE DADOS
int fib(int n){
int fn;
int num1 = 0, num2 = 1, result = 0, i;

// TRATAMENTO DE INSER��O DE N�MEROS NEGATIVOS:
while (n < 1){
    printf("\nInsira valores maior ou igual a 1.\nTente novamente: ");
    scanf("%d", &n);
}
// CASOS DE N = 1 E N = 2:
if ( n == 1 || n == 2){
    printf("\nFibonacci = 1.");
}
// C�LCULO DE POSI��O:
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
    printf("Sequ�ncia de Fibonacci:\n");
    printf("Insira a posi��o: ");
    scanf("%d", &x);
    y = fib(x);
    return 0;
}
