#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inteiro = 10;
    float real = 2.5;
    char letra = 'A';

    printf("Antes: \n\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %1.2f\n", real);
    printf("Char: %c\n\n", letra);

    int *ponteiroInt = &inteiro;
    float *ponteiroReal = &real;
    char *ponteiroLetra = &letra;

    *ponteiroInt = 15;
    *ponteiroReal = 3.5;
    *ponteiroLetra = 'B';

    printf("\nAlterado:\n\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %1.2f\n", real);
    printf("%c", letra);
    return 0;
}
