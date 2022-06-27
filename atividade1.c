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
  int i,z;
  float vetor[15][1],med[15],cont;
  for(i=0;i<15;i++){
    printf("Digite as notas do %dº aluno",i+1);
    scanf("%f",&vetor[i][0]);
    scanf("%f",&vetor[i][1]);
    med[i]=((cont=(vetor[i][1]+vetor[i][0]))/2;
  }
  for(z=0;z<15;z++){
    print("Aluno %d\tnota 1:%.1f\tnota 2:%.1f\tmedia:%.1f\tsituacao:%d",
  
  
  
  
  
  
  
  
