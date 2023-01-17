#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont = 0,media,menor_media,maior_media,soma;
    float media_ari;
    while (media >= 0){

        printf("Digite a media: ");
        scanf("%d",&media);
        cont++;
    if( media >= 0){
        if (cont == 1){
            menor_media = media;
            maior_media = media;
            soma = media;

        }

        else{
            if (media < menor_media){
                menor_media = media;
            }
            if (media > maior_media){
                maior_media = media;
            }
            soma = soma + media;

            media_ari = ((float)soma /cont);
        }
    }
}
            printf("A maior nota: %d \nMenor nota: %d  \nMedia Aritimetica: %.1f\n\n",maior_media,menor_media,media_ari);

}
