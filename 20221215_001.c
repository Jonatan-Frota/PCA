#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, total;
    printf("Insira o primeiro numero: ");
    scanf("%d", &n1);
    printf("Insira o segundo numero: ");
    scanf("%d", &n2);
    total = n1 + n2;
    printf("Sua soma dos valores %d + %d eh igual a: %d.", n1, n2, total);
    return 0;
}
