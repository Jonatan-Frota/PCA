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

setlocale(LC_ALL, "Portuguese");
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
    printf("%d é um segmento de %d\n",b,a);
  else
    printf("%d não é um segmento de %d\n",b,a);

  return 0;
}
