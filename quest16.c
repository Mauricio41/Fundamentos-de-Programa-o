#include <stdio.h>

int main(){
    int vet[20], vet2[20], i, j, aux, cont=0;
    printf("\nDigite os numeros:\n");
    for (i=0; i<20; i++)
        scanf("%d", &vet[i]);
    for (i=0; i<20-1; i++) {
        for (j=i+1; j<20; j++) {
            if (vet[i] > vet[j]) {
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }
    for (i=0; i<20; i++) {
        if (i == 0 | vet[i-1] != vet[i]) {
            vet2[cont] = vet[i];
            cont++;
        }
    }
    printf("\nVetor ordenado e sem elementos repetidos\n");
    for (i=0; i<cont; i++)
        printf("%d \n", vet2[i]);
}
