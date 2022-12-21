#include <stdio.h>
#include <stdlib.h>

int main()
{  printf("*** TABUADA *** \n\n");
    int i = 0, n = 1, r1, r2, r3, r4, r5, r6, r7, r8, r9;
    do {
    r1 = n * 1;
    r2 = n * 2;
    r3 = n * 3;
    r4 = n *4;
    r5 = n *5;
    r6 = n *6;
    r7 = n*7;
    r8 = n*8;
    r9 = n*9;

    printf("1x%d = %d / ", n, r1);

    printf("2x%d = %d / ", n, r2);

    printf("3x%d = %d / ", n, r3);

    printf("4x%d = %d / ", n, r4);

    printf("5x%d = %d /", n , r5);

    printf("6x%d = %d /", n , r6);

    printf("7x%d = %d /", n,  r7);

    printf("8x%d = %d /", n,  r8);

    printf("9x%d = %d /", n, r9);
    n++;
    i++;



    } while (i <= 9);

    return 0;
}
