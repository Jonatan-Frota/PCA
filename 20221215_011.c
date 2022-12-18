#include <stdio.h>
#include <stdlib.h>

int main()
{   printf("*** CALCULO FINANCEIRO ***\n");
    int horas;
    float salario, total, ir, inss, sind, liq;
    printf("Insira sua quantidade de horas/mes trabalhadas: ");
    scanf("%d", &horas);
    printf("Insira o seu salario por hora: ");
    scanf("%f", &salario);
    printf("------------------------------------------\n");
    total = salario*horas;
    printf("Renda bruta: R$%1.2f\n", total);
    ir = 0.11*total;
    inss = 0.08*total;
    sind = 0.05*total;
    liq = total - ir - inss - sind;
    printf("Imposto de renda: R$%1.2f\n", ir);
    printf("INSS: R$%1.2f\n", inss);
    printf("Sindicato: R$%1.2f\n", sind);
    printf("Salario Liquido: R$%1.2f\n", liq);
    return 0;
}
