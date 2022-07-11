include <stdio.h>

int main(){
  int veto[10], z[10], i, j, aux=0;
  printf("\nDigite os 10 valores do vetor:\n");
  for (i=0; i<10; i++){
  scanf("%d", &veto[i]);
  }
  for (i=0; i<10; i++) {
    aux=1;
    if (veto[i] == 1)
      z[i] = 1;
    else {
      for (j=1; j<veto[i]; j++) {
        aux *= j + 1;
      }
    z[i] = aux;
    }
  }
  printf("\nNumero \t Fatorial:\n");
  for (i=0; i<10; i++){
    printf("%d \t %d \n", veto[i], z[i]);
  }
}
