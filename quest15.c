#include <stdio.h>

int main(){
    int v[30], i;

    printf("\nDigite os numeros:\n");
    for (i=0; i<30; i++){
        scanf("%d", &v[i]);
    }    
    printf("\nNumeros em ordem contraria a leitura:\n");
    for (i=29; i>=0; i--){
        printf("%d \n", v[i]);
    }
}
