#include <stdio.h>

int main(void) {
  float matriz[12][12];
  int numL;
  char charT;
  float soma = 0;
  
  scanf("%d",&numL);
  scanf(" %c",&charT);
  if(numL>=0 && numL<=11 && (charT =='S' || charT == 'M')){
      for(int i=0; i<12;i++){
          for(int j=0; j<12; j++){
              scanf("%f",&matriz[i][j]);
          }
      }
      if(charT == 'S'){
        for(int i=0; i<12;i++){
          soma += matriz[i][numL];
        }
        printf("%.1f\n", soma);
      }
      else{
        for(int i=0; i<12;i++){
          soma += matriz[i][numL];
        }
        soma = (soma/12);
        printf("%.1f\n", (soma));
      }
  }
  
  return 0;
}