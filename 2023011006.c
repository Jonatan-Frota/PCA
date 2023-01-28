#include <stdio.h>
#include <stdio.h>
#include <locale.h>

int bin(int num) {
    int bin = 0, resto = 0, c = 0, menor = 0;

    printf("Conversão para binário: ", num);
    while (num >= 2) {
        resto = num % 2;
        num = num / 2;
        printf("%d", resto);
        if (num <= 2 && num > 0){
            c++;
            menor = num;
            if (c > 1 && num < menor){
                menor = num;
            }}}
    printf("%d\n", menor);}
int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    bin(num);

    return 0;
}
