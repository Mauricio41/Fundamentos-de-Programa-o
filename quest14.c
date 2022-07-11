#include <stdio.h>

int main(){
    float v[100], media=0;
    int igual30=0, maior=0, igual=0, i;

    printf("\nDigite os numeros:\n");
    for (i=0; i<100; i++) {
        scanf("%f",&v[i]);
        if (v[i] == 30)
            igual30++;
            media += v[i];
    }

    media = media / 100;
    for (i=0; i<100; i++) {
        if (v[i] > media)
            maior++;
        else if (v[i] == media)
            igual++;
    }
    printf("\nQtde de numeros iguais a 30: %d\n", igual30);
    printf("\nQtde de numeros maiores que a media: %d\n", maior);
    printf("\nQtde de numeros iguais a media: %d\n", igual);
}
