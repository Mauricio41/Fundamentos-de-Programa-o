#include <stdio.h>

int main(){
  int a,b;
  float vetor[8];
  printf("Digite a seguir 8 numeros para serem armazenados");
  for(a=0;a<8;a++){
    printf("Posicao %d:",a);
    scanf("%f",&vetor[0][a]);
  }
  printf("\n\tA sequencia de numeros:\n");
  for(b=0;b<8;b++){
    printf("posicao %d: %.1f",b+1,vetor[0][b]);
  }
   printf("\n\tA sequencia de numeros multiplos de 6:\n");
  for(c=0;c<8;c++){
    if(vetor[c]%6==0){
      printf("%.1f eh multiplo de 6",vector[c]);
    }
  }
}
