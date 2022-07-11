#include <stdio.h>

int main(){
  int a,b;
  float codigo[30],PC[30],PV[30],quant[30];
  for(a=0;a<30;a++){
    printf("Digite o codigo, quantidade, Preco de Venda, Preco de compra em sequencia do produto %d:\n",a+1);
    scanf("%f",&codigo[a]);
    scanf("%d",&quant[a]);
    scanf("%f",%PV[a]);
    scanf("%f",&PC[a]);
  }
  printf("voce deseja listar todos ou algum em especifico dos produtos?\n1-Todos\n2-Especifico");
  scanf("%d",&list);
  if(list==1){
    for(b=0;b<30;b++){
      printf("O produto %d codigo: %.0f Preco de Venda: %.2f  Preco de Compra: %f  Quantidade: %f.0\n",b+1,codigo[b],PV[a],PC[a],quant[a]);
    }
  }else if(list==2){
    printf("Digite o codigo do produto:\n");
    scanf("%f",&cod);
    for(c=0;c<30;c++){
      if(cod==codigo[c]){
        printf("O produto %d codigo: %.0f Preco de Venda: %.2f  Preco de Compra: %f  Quantidade: %f.0\n",c+1,codigo[c],PV[c],PC[c],quant[c]);
      }
    }
  }
}
