#include <stdio.h>

int main(){

    int numero, id, i, cont;
    int num[10], lugares[10], acento[10];

    for (i=0; i<10; i++) {
        printf("\nDigite o numero do voo:\n");
        scanf("%d",&num[i]);
        printf("\nDigite a quantidade de lugares no voo:\n");
        scanf("%d",&lugares[i]);
        acento[i] = 0;
    }

    do {
        printf("\nDigite o numero do voo para o cliente:\n");
        scanf("%d", &numero);
        cont = 0;
        for(i=0; i<10; i++) {
            if(numero == num[i]) {
                if (acento[i] < lugares[i]) {
                    printf("\nDigite a identidade do cliente:\n");
                    scanf("%d", &id);
                    printf("\nVoo: %d\n", num[i]);
                    printf("\nID: %d\n", id);
                    acento[i]++;
                }else
                    printf("\nVoo cheio\n");
            }else
                cont++;
            }
            if (cont == 10)
                printf("\nVoo nao encontrado\n");
    } while(numero != 0);
}
