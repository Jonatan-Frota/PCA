#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char data[11];
    int a, a1, a2, b1, b2, c1, c2, c3, c4, i, jotaquest;
    int dia, mes, ano;
    printf("Insira uma data: ");
    scanf("%s", &data);
    a = strlen(data);
    a1 = isdigit(data[0]);
    a2 = isdigit(data[1]);
    b1 = isdigit(data[3]);
    b2 = isdigit(data[4]);
    c1 = isdigit(data[6]);
    c2 = isdigit(data[7]);
    c3 = isdigit(data[8]);
    c4 = isdigit(data[9]);
    while(data[2] != '/' || data[5]!= '/'|| a < 10 || a1 != 1 || a2 != 1 || b1 != 1 || b2 != 1 || c1 != 1 || c2 != 1 || c3 != 1 || c4 != 1){
        printf("Valores inseridos incorretamente, tente novamente: ");
        scanf("%s", &data);
        a = strlen(data);
         a1 = isdigit(data[0]);
    a2 = isdigit(data[1]);
    b1 = isdigit(data[3]);
    b2 = isdigit(data[4]);
    c1 = isdigit(data[6]);
    c2 = isdigit(data[7]);
    c3 = isdigit(data[8]);
    c4 = isdigit(data[9]);
    }

    dia = (data[0] - '0') * 10 + (data[1] - '0');
    printf("Dia: %d\n", dia);
    mes = (data[3] - '0') * 10 + (data[4] - '0');
    printf("Mes: %d\n", mes);
    ano = (data[6] - '0') * 1000 + (data[7] - '0') * 100 +
         (data[8] - '0') * 10 + (data[9] - '0');
         printf("Ano: %d", ano);
    return 0;
}
