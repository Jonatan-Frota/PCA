#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    // Strings:
    char p[20], p2[20], p3[20], vercar, sub[20];
    // Comandos:
    int comando, tam, tam2, tam3, tam4, verif, comparar;
    //Auxiliares:
    int inicio;
    char c1, c2;
    // Contadores:
    int i, j = 0, k = 0, l = 0;
    // Seleção de String inicial (poderá ser alterada depois)
    printf("Digite uma string inicial: ");
    scanf("%s", &p);

    do{
    printf("\n\n------------- Menu ----------------\n\n");
    printf("[1] Ler uma string\n[2] Imprimir o tamanho da string\n[3] Comparar a string fornecida com outra\n[4] Concatenar a string fornecida com outra\n[5] Imprimir a string fornecida de forma inversa\n[6] Verificar a repeticao de um caractere na string fornecida\n[7] Substituir determinado caractere por outro\n[8] Verificar se uma string inserida eh substring\n[9] Imprimir uma substring\n[0] Finalizar");
    printf("\nDigite um numero para realizar um processo: ");
    scanf("%d", &comando);
    if(comando > 9 || comando < 0){
        printf("\nComando invalido. Insira os valores disponiveis no menu!\n");
        return 1;
    }
    switch (comando){
case 1:
    printf("\n------------------------------------\nComando 1:\n\n");
    printf("Digite uma palavra: ");
    scanf("%s", &p);
    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;

case 2:
    printf("\n-------------------------------------\nComando 2\n\n");
    tam = strlen(p);
    printf("Tamanho da string: %d", tam);
    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;
case 3:
      printf("\n-------------------------------------\nComando 3\n\n");
      printf("Insira uma string para comparar: ");
      scanf("%s", &p2);
      comparar = strcmp(p, p2);
      printf("\n %s X %s \n", p, p2);
      if (comparar == 0){
        printf("\nResultado: Sao iguais!");
      }
      else {
        printf("\nResultado: Sao diferentes!");
      }
    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;
case 4:
    printf("\n-------------------------------------\nComando 4\n\n");
    printf("Insira uma string para concatenar: ");
    scanf("%s", &p3);
    strcat(p, p3);
    printf("\nResultado: ");
    puts(p);
    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;
case 5:
     printf("\n-------------------------------------\nComando 5\n\n");
    tam = strlen(p);
     for (i = tam; i >= 0; i--){
        printf("%c", p[i]);
     }
    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;
case 6:
     j = 0;
     printf("\n-------------------------------------\nComando 6\n\n");
     tam = strlen(p);
     printf("Digite um caractere: ");
     scanf(" %c", &vercar);
     for (i = 0; i < tam; i++){
        if (vercar == p[i]){
            j += 1;
        }
     }
     printf("\nO caractere (%c) foi encontrado %d vezes.\n", vercar, j);


    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;

case 7:
      j = 0;
      printf("\n-------------------------------------\nComando 7\n\n");
      printf("Insira o caractere que sera substituido na primeira ocorrencia: ");
      scanf(" %c", &c1);
      printf("Digite o caractere que ira substituir: ");
      scanf(" %c", &c2);
      tam = strlen(p);
      printf("\nResultado: ");
      for (i = 0; i < tam; i++){
            if (c1 == p[i] && j == 0){
                p[i] = c2;
                j += 1;
            }
      printf("%c", p[i]);
      }
      printf("\n");
      if (j == 0){
        printf("Nao foi encontrado nenhum caractere para substituir na sua string. Tente outro.");
      }
    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;

case 8:
    j = 0;
    printf("\n-------------------------------------\nComando 8\n\n");
    printf("Insira uma string: ");
    scanf("%s", &sub);
    tam = strlen(p);
    tam2 = strlen(sub);
      for (i = 0; i < tam; i++){
            for ( j = 0; j < tam2; j++){
                if (p[i] != sub[j]){
                    i++;
                    j++;
                }
                if (p[i] == p[j]){
                    do{
                        k += 1;
                        j++;
                        i++;
                        l++;
                    }while(l < tam2);
                }
            }}
           if (k == tam2){
            printf("\nSubstring!");
           }
           else{
            printf("Nao eh substring.");
           }

    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;

case 9:

     printf("\n-------------------------------------\nComando 9\n\n");
     tam4 = strlen(p);
     printf("Insira o valor inicial: ");
     scanf("%d", &inicio);
     printf("Insira o tamanho da substring: ");
     scanf("%d", &tam3);
     if(tam3 > tam4){
        printf("Valor de substring maior que o da string. Tente novamente.");
        return 1;
     }
     printf("\n\nSubstring: ");
     for (i = inicio; i <= tam3; i++){
        printf("%c", p[i]);
     }
    printf("\n\nDigite [1] para retornar ao menu ou [0] para finalizar: ");
    scanf("%d", &verif);
    printf("\n");
    break;

    }
    }while(verif == 1 || comando == 0);
    return 0;
}
