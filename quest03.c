#include <stdio.h>

int main(){
  int i,z,situa[15];
  float vetor[15][1],med[15],cont;
  for(i=0;i<15;i++){
    printf("Digite as DUAS notas do %dº aluno:\n",i+1);
    scanf("%f",&vetor[i][0]);
    scanf("%f",&vetor[i][1]);
    med[i]=((cont=(vetor[i][1]+vetor[i][0]))/2);
    if(med[i]>=7.0){
      situa[i]=1;
    }else if(med[i]<7.0){
      situa[i]=0;
  }
  }
  for(z=0;z<15;z++){
    printf("\nAluno %d\t\tnota 1:%.1f\t\tnota 2: %.1f\t\tmedia:%.1f\t\tsituacao:%d",z+1,vetor[z][0],vetor[z][1],med[z],situa[z]);
  }
}
