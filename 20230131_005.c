#include <stdio.h>
#include <string.h>

int main(){
    int i, a;
    char p[100];
    printf("Digite uma String: ");
    scanf(" %[^\n]", p);
    a = strlen(p);
    for (i = 0; i < a; i++){
        if(p[i] == ' '){
            printf(" ");
            i++;
        }
        if(p[i] != 'x' || p[i] != 'y'|| p[i] !='z'){
            printf("%c", p[i]+3);
        }else{
            printf("%c", p[i] - 23);
        }

    }
    return 0;
}
