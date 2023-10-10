#include <stdio.h>

int main(void) {
  int runas, minPontos,pontuacao = 0;
  scanf("%d%d",&runas,&minPontos);

  if (runas >=1 && minPontos <=100){
    char listaRunas[runas];
    int listaPontuacao[runas];

    for(int i =0; i<runas;i++){
      char adicionaRuna;
      int pontosRuna;
      scanf(" %c%d", &adicionaRuna, &pontosRuna);
      if(adicionaRuna>='A' && adicionaRuna<='Z' && pontosRuna>=-100 && pontosRuna<=100){
        listaRunas[i] = adicionaRuna;
        listaPontuacao[i] = pontosRuna;
      }
    }
    
    int numRunas;
    scanf("%d",&numRunas);
    char runasUsadas[numRunas];
    for(int i=0;i<numRunas;i++){
      scanf(" %c",&runasUsadas[i]);
    }
  
    for(int i =0; i<numRunas;i++){
      char runa = runasUsadas[i];
      for(int j = 0; j<runas;j++){
        if (listaRunas[j]==runa){
          pontuacao += listaPontuacao[j];
          break;
        }
      }
    }
    if (pontuacao>=minPontos){
      printf("%d\n",pontuacao);
      printf("You shall pass!\n");
    }
    else{
      printf("%d\n",pontuacao);
      printf("My precioooous\n");
      
    }
  }
  return 0;
}