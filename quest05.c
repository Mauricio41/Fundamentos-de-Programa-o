int main(){
      float P_C[100], P_V[100];
      int x=0,z=1,lucro=0, mercadoriamenor10=0,mercadoriamenor20=0,mercadoriamaior20=0;
      for(x=0;x<3;x++){
      printf("Informe O preço DE COMPRA\n");
                      scanf ("%f", &P_C[x]);
            printf("Informe O preço DE VENDA:\n");
            scanf("%f",&P_V[x]);}
            lucro = 100*(P_V[x]-P_C[x])/P_C[x];
      
      if (lucro<1.10)
          {
          mercadoriamenor10=mercadoriamenor10++;
          }
       else
       {
      if (lucro<=1.10 && lucro<=1.2)
          {
          mercadoriamenor20=mercadoriamenor20++;
          }
      if (lucro>1.20)
      {
      mercadoriamaior20=mercadoriamaior20++;
      }
          
      
      printf ("Numero de mercadorias inferior a 10%% é %d\n",mercadoriamenor10);
      printf("Numero de mercadorias com lucro maior ou igual a 10%% e menor do que 20%%: %d\n", mercadoriamenor20);
      printf("Numero de mercadorias com lucro superior a 20%%: %d\n", mercadoriamaior20);
      }
}
