#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char p[100];
    int i, j, a, cont = 0, aux = 0;
    printf("Insira uma string: ");
    scanf("%[^\n]", p);
    a = strlen(p);
    for(i = 0; i < a; i++){
        if (p[i] == ' '){
            aux += 1;
        }
    }
    for (i = 0; i < a; i++){
    for (j = a; j >= 0; j--){
            if (toupper(p[j]) == toupper(p[i]) && p[j] != ' ' && p[i] != ' '){
               cont += 1;
                i++;
            }

    }
        }
    printf("\n");
    if (cont == a - aux){
        printf("Eh um palindromo!");
    }
    else{
        printf("Nao eh palindromo!");
    }
    return 0;
}
