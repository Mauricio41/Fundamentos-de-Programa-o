#include <stdio.h>
//1. Faça um programa que armazene 10 letras em um vetor e imprima uma listagem numerada.
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
//2. Faça um programa que armazene 8 números em um vetor e imprima todos os números. Ao final, imprima o total de números múltiplos de seis.
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
/*3. Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule e armazene a média arredondada. 
Armazene também a situação do aluno: 1- Aprovado ou 2 Reprovado. Ao final o programa deve imprimir uma listagem contendo as notas,
a média e a situação de cadaaluno em formato tabulado. Utilize quantos vetores forem necessários para armazenar os dados.*/
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
/*4. Construa um programa que permita armazenar o salário de 20 pessoas. Calcular e armazenar o novo salário sabendo-se que o reajuste foi de 8%. 
Imprimir uma listagem numerada com o salário e o novo salário. Declare quantos vetores forem necessários.*/

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
  
  
  
