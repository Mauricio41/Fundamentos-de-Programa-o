#include <stdio.h>

int main(){
  float salario[20],reajust[20];
  int i,z,x;
  for(i=0;i<20;i++){
    printf("Informe o salario do %dº pessoa:\n",i+1);
    scanf("%f",&salario[i]);
  }
  for(z=0;z<20;z++){
    reajust[z]=salario[z]+(salario[z]*0.08);
  }
  for(x=0;x<20;x++){
    printf("o valor do reajuste no valor de 8%% da %dº pessoa foi:  %.2f\n",x+1,reajust[x]);
  }
} 
