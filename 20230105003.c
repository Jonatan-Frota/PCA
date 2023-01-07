#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// ENTRADA E VERIFICAÇÃO:
int entrada(int n1){
    while(n1%2 != 0){
    printf("Só é permitida a inserção de número par! \nTente novamente: ");
    scanf("%d", &n1);
}
return n1;
}

// CÁLCULO DE NÚMERO PERFEITO:
int perfeito (int n1, int i, int soma){
     for (i = 1; i<=n1; i++){
        if (n1%i == 0){
            soma = (soma + i);
        }
    }
    if (n1 != 0 && n1!=1 && n1==soma/2){
        printf("\nO número %d é perfeito!\n", n1);}
    else {
        printf("\nO número %d não é perfeito.\n", n1);
    }

}


int main()
{   int a, p, j, i;
    setlocale(LC_ALL, "Portuguese");
    printf("Verifique se um número é perfeito: \n");
    scanf("%d", &a);
    p = entrada(a);
    j = perfeito(p, j, i);
    return 0;
}
