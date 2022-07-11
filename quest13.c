#include <stdio.h>

int main(){
    int v[100], i, numero, cont=0, ultimo, aux=0;

    printf("\nDigite os numeros:\n");
    for (i=0; i<100; i++) {
        scanf("%d", &v[i]);
        if (v[i] == 0)
            break;
        else {
            cont++;
            ultimo = v[i];
        }
    }

    for (i=0; i<cont; i++) {
        if (v[i] == ultimo)
            aux++;
    }
    printf("\nQuantidade de numeros iguais ao ultimo: %d\n", aux);
}
