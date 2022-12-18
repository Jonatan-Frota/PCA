#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, n4, media;
    printf("Insira a nota do primeiro bimestre: ");
    scanf("%f", &n1);
    printf("Insira a nota do segundo bimestre: ");
    scanf("%f", &n2);
    printf("Insira a nota do terceiro bimestre: ");
    scanf("%f", &n3);
    printf("Insira a nota do quarto bimestre: ");
    scanf("%f", &n4);
    media = (n1+n2+n3+n4)/4;
    printf("A sua media final eh: %1.1f", media);
    return 0;
}
