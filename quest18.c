#include <stdio.h>

int main(){
    int matricula[100], i, j, auxMat;
    float media[100], auxMedia;


    for (i=0; i<100; i++) {
        printf("\nDigite a matricula:\n");
        scanf("%d", &matricula[i]);
        printf("\nDigite a media:\n");
        scanf("%f", &media[i]);
    }
    for (i=0; i<100-1; i++) {
        for (j=i+1; j<100; j++) {
            if (media[i] < media[j]) {
                auxMedia = media[i];
                media[i] = media[j];
                media[j] = auxMedia;
                auxMat = matricula[i];
                matricula[i] = matricula[j];
                matricula[j] = auxMat;
            }
        }
    }
    printf("\Matricula\t Media\n");
    for (i=0; i<100; i++) {
        printf("%d\t\t", matricula[i]);
        printf("%f\n", media[i]);
    }
}
