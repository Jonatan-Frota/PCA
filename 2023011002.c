#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int verifv = 1, veriff = 0;

int encaixa(int a, int b) {

  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return verifv;
  else
    return veriff;
}

int main() {
  int a, b, seq, maior, menor;

  printf("Digite 2 inteiros maiores que 0: ");
  scanf("%d %d", &a, &b);

  if (a > b) {
    maior = a;
    menor = b;
  }
  else {
    maior = b;
    menor = a;
  }

  seq = veriff; // = 0
  while (maior >= menor) {
    if (encaixa(maior,menor) == verifv) // = 1
      seq = verifv;
    maior = maior/10;
  }
  if (seq == verifv) // = 1
    printf("%d É um segmento de %d\n",b,a);
  else
    printf("%d Não é um segmento de %d\n",b,a);

  return 0;
}
