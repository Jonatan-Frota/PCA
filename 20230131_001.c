#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


// Ao contrário:
void tras(char p[100]){
    printf("[Ao contrario]:");
int i, tam;
tam = strlen(p);
printf("\n");
for (i = tam; i >= 0; i--){
    printf("%c", p[i]);
}
printf("\n\n");
}

// Sem Vogais:
void sv(char p[100]){
    printf("[Sem as vogais]: \n");
int i, tam;
tam = strlen(p);
for (i=0; i <= tam; i++){
    if(p[i]!= 'a' && p[i]!= 'e' && p[i]!= 'i' && p[i]!= 'o' && p[i]!= 'u' && p[i]!= 'A' && p[i]!= 'E' && p[i]!= 'I' && p[i]!= 'O' && p[i]!= 'U'){
        printf("%c", p[i]);
    }
    }
    printf("\n\n");
}

//Tudo em maiusculo:
void maiusculo(char p[100]){
    printf("[Convertendo para Maiusculo]: \n");
int i, tam;
tam = strlen(p);
for (i = 0; i < tam; i++){
    p[i] = toupper(p[i]);
}
printf("%s", p);
printf("\n\n");
}


// Contagem de letra:
void contagem(char p[100]){
    printf("[Contagem de caractere]: \n\n");
int i, tam, j = 0;
char c;
tam = strlen(p);
printf("Insira um caractere: ");
scanf("%c", &c);
c = toupper(c);
for (i = 0; i < tam; i++){
    if (p[i] == c){
        j = j+1;
    }
}
printf("%d", j);
printf("\n\n");
}



void exclusao(char p[100]){
    printf("[Exclusao de Caractere]: \n\n");
int i, tam;
char c;
tam = strlen(p);
printf("Insira um caractere: ");
scanf("%c", &c);
c = toupper(c);
for (i = 0; i < tam; i++){
    if (p[i] != c){
        printf("%c", p[i]);
    }
}
}


int main()
{
    char palavra[100];
    char c;
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    scanf("%c", &c);
    tras(palavra);
    sv(palavra);
    maiusculo(palavra);
    contagem(palavra);
    scanf("%c", &c);
    exclusao(palavra);
    return 0;
}
