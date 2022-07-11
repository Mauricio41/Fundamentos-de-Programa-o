#include <stdio.h>

int main(){
    int codigo[30], tel[30], i, cod;

    for (i=0; i<30; i++) {
        printf("\nDigite o codigo:\n");
        scanf("%d", &codigo[i]);
        printf("\nDigite o telefone:\n");
        scanf("%d", &tel[i]);
    }
    printf("\nDigite o codigo para procurar:\n");
    scanf("%d", &cod);
    for (i=0; i<30; i++) {
        if (codigo[i] == cod) {
            printf("\nTelefone: %d\n",tel[i]);
        }
    }
}
