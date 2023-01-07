#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int fat(int n)
{
    int i, nf = 1;
    for (i = 1; i <= n; i++){
        nf = nf*i;
    }
    return nf;

}

int main()
{   setlocale(LC_ALL, "Portuguese");
    int x, y;
    printf("Digite um número e veja seu fatoral: ");
    scanf("%d", &x);
    y = fat(x);
    printf("\nO fatorial de %d é: %d.", x, y);
    return 0;
}
