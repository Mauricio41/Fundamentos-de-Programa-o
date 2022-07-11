#include <stdio.h>

int main(){
  int a,b;
  char vetor[0][10];
  printf("Digite a seguir 10 caracteres para serem armazenados");
  for(a=0;a<10;a++){
    printf("Posicao %d:",a);
    scanf("%s",&vetor[0][a]);
  }
  printf("\n\tA sequencia de caracteres:\n");
  for(b=0;b<10;b++){
    printf("posicao %d: %s",b+1,vetor[0][b]);
  }
}
