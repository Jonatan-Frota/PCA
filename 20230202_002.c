#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Variaveis Globais:
char n[20][120], copia;
int i, j, verif, tam = 0;




// Impressao da lista de nomes:
void imprimir (int k){

    printf("\nLista de nomes: \n");

   for (i = 0; i < tam - 1; i++){
        printf("%s", n[i]);
     }}



// Eliminar um nome da lista e printar:
void eliminar (int c){
char x[120];
printf("\n\n");
printf("\n---------------------------------------------------\n\n");
printf("Digite um nome que deseja eliminar da lista: ");
fgets(x, 120, stdin);
printf("\nLista de nomes atualizada: \n\n", x);
for (i = 0; i < tam -1; i++){
    if(strcmp(x, n[i]) != 0){
        printf("%s", n[i]);
    }}}



// Atribuindo uma nova lista em ordem alfabetica:
 void alfa(int o) {
    int i, j, k;
char ordem[120];

    for (i = 0; i < tam - 1; i++) {
        for (j = 0; j < tam - 1 - i; j++) {
            if (strcmp(n[j], n[j+1]) > 0) {
                ordem[120];
                strcpy(ordem, n[j]);
                strcpy(n[j], n[j+1]);
                strcpy(n[j+1], ordem);
            }
        }
    }
    printalfa(k);
 }



 // Printando a Lista em ordem alfabetica:
void printalfa (int l){

printf("\n---------------------------------------------------\n\n");
    printf("\nImpressao em ordem alfabetica:\n\n");

for (i = 1; i < tam; i++) {
        printf("%s", n[i]);
    }
}





// Ler a lista de nomes:
int main()
{
    int k, c, o;
    printf("Digite um numero para finalizar a lista de nomes: \n\n");
     for (i = 0; i < 20; i++){
        printf("Digite o nome: ");
        fgets(n[i], 120, stdin);
        tam += 1;
        verif = isdigit(n[i][0]);
        if (verif == 1){
            break;
        }
     }
     imprimir(k);
     eliminar(c);
     alfa(o);

    return 0;
}
