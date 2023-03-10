#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int j;
    char string[50];
    char letra;
    printf("Digite uma string: ");
    scanf("%s", &string);
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    j = verificar(string, letra);

    return 0;
}

int verificar(char palavra[50], char letra[]){
int cont = 0, i = 0, j;
char *pp = palavra;


    while(*pp != '\0'){
            if(*pp == letra){
                cont++;

            }
        pp++;
    }


int v[cont-1];
i = 0;
pp = palavra;


    while (*pp != '\0') {
        if (*pp == letra) {
            v[i] = pp - palavra;
            i++;
        }
        pp++;
    }

printf("\n\n");
printf("Vezes encontradas (tamanho do vetor): %d\n", cont);
printf("\nPosicoes encontradas: \n");

for (i = 0; i < cont; i++){
    printf("%d ", v[i]);}

}
