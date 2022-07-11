#include <stdio.h>

int main(){
    int v[50], v2[50], i;

    printf("\nDigite os 50 valores do vetor:\n");
    for (i=0; i<50; i++) {
        scanf("%d", &v[i]);
        v2[i] = v[i] * v[i];
    }

    printf("\nQuadrado dos elementos do vetor:\n");
    for (i=0; i<50; i++)
    printf("%d \n", v2[i]);
}
