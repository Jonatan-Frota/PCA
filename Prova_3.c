#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, j, cont1 = 0, cont2 = 0, cont3 = 1, k = 0;
    char equipes [][12] = {"Joao", "Carla", "Matheus", "Fabiana", "Leonardo", "Christian", "Pedro", "Gabriela", "Larissa", "Renata", "Tiago", "Marcela"};
    char sexo [12] = {'H', 'M', 'H', 'M', 'H', 'H', 'H', 'M', 'M', 'M', 'H', 'M'};
    int notas [12] = {10, 8, 7, 7, 8, 9, 9, 10, 6, 9, 8, 8};


// Quantidade de Meninas:

    for (i = 0; i < 6; i++){
        if (sexo[i] == 'M'){
            cont1 += 1;
        }}
    for (i = 6; i < 12; i++){
        if (sexo[i] == 'M'){
            cont2 += 1;
        }}

    if (cont1 > cont2){
        printf("A primeira equipe tem mais meninas.");
    }
    if (cont2 > cont1){
        printf("A segunda equipe tem mais meninas.");
    }
    if (cont1 == cont2){
        printf("Ambas as equipes tem a mesma quantidade de meninas.");
    }

    printf("\n\n");



// Processo Seletivo:
    for (i = 0; i < 12; i++){
        if (notas[i] >= 8 && sexo[i] == 'M'){
            cont3 += 1;
        }
    }
char selecao[cont3][10];

    for (i = 0; i < 12; i++){
        if (sexo[i] == 'M' && notas[i] >= 8){
            k++;
            strcpy(selecao[k], equipes[i]);
        }
    }
printf("Selecionadas: \n");
  for (i = 1; i < cont3; i++){
    printf("%s\n", selecao[i]);
  }

  //Chamada de funções:
  ponto(equipes, sexo, notas);
  adicionar(equipes, sexo, notas);

    return 0;
}



// Acrescentar Ponto:

void ponto(char nomes[][12], char sexo[12], int notas[]){
    printf("\nAdicionando ponto as mulheres do segundo grupo: \n");
int i;
for (i = 6; i <12; i++){
    if(sexo[i] == 'M' && notas[i] != 10){
        notas[i] += 1;
    }
}
for (i = 6; i <12; i++){
    if(sexo[i] == 'M'){
            printf("%s, ", nomes[i]);
        printf("nota: %d\n", notas[i]);
    }}
}


// Adicionar aluno:

void adicionar(char nomes[][12], char sexo[12], int notas[]){

int i, a, nota;
char equipeof[10][14], sexoof[14];
int notaof[14];
char nome[10], sexoaluno;

printf("\n\n");
printf("Insira os dados do aluno:\n");
printf("Sexo: ");
scanf(" %c", &sexoaluno);
while(sexoaluno != 'M' && sexoaluno!= 'H'){
    printf("Digite H ou M em MAIUSCULO para representar o sexo do aluno! Tente novamente: ");
    scanf(" %c", &sexoaluno);
}
printf("Nome: ");
scanf(" %s", nome);
printf("Insira a nota do aluno: ");
scanf("%d", &nota);
while(nota > 10 || nota <0){
    printf("Insira uma nota valida! Tente novamente: ");
    scanf("%d", &nota);
}

printf("Em qual equipe voce deseja adicionar um aluno: ");
scanf("%d", &a);
while(a < 1 || a > 2){
    printf("Existe a equipe 1 e 2! Digite um valor valido: ");
    scanf("%d", &a);
}

if (a == 1){
    printf("\n>> Equipe selecionada: 1\n\n");
    strcpy(equipeof[0], nome);
    notaof[0] = nota;
    sexoof[0] = sexoaluno;

    for (i = 1; i < 7; i++){
        strcpy(equipeof[i], nomes[i-1]);
        notaof[i] = notas[i-1];
        sexoof[i] = sexo[i-1];

    }
    printf("-----------------------\n");
    printf("\nEquipe 1 atualizada: \n\n");
for (i = 0; i < 7; i++){
    printf("%s - ", equipeof[i]);
    printf("Sexo: %c - ", sexoof[i]);
    printf("Nota: %d\n", notaof[i]);
}
}

if (a == 2){
    printf("\n>> Equipe selecionada: 2\n\n");
    strcpy(equipeof[0], nome);
    notaof[0] = nota;
    sexoof[0] = sexoaluno;

    for (i = 1; i < 7; i++){
        strcpy(equipeof[i], nomes[i+5]);
        notaof[i] = notas[i+5];
        sexoof[i] = sexo[i+5];

    }
    printf("-----------------------\n");
    printf("\nEquipe 2 atualizada: \n\n");
for (i = 0; i < 7; i++){
    printf("%s - ", equipeof[i]);
    printf("Sexo: %c - ", sexoof[i]);
    printf("Nota: %d\n", notaof[i]);
}
}


}


