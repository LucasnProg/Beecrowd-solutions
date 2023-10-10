#include <stdio.h>


int main(void) {
  int numN, numLinha, numColuna, tentativas=0, atual=1, cont=0, iterador= 0;
  scanf("%d%d%d",&numN, &numLinha, &numColuna);
  int achados=0, todos=(numN*numN);
  
  while(achados< todos){
    if ((numLinha>=0) && (numColuna>=0) && (numLinha<numN)&&(numColuna<numN)){
      if(achados){printf(" ");}
      int valor = (numN*numLinha)+(numColuna+1);
      printf("%d",valor);
      achados++;
    }
    
  cont++;

  if (iterador %4 == 0)
    numColuna += 1;
  else if (iterador %4 == 1)
    numLinha += 1;
  else if (iterador %4 == 2)
    numColuna -= 1;
  else
    numLinha -= 1;

  if(cont == atual){
    iterador ++;
    if (iterador%2 ==0){
      atual ++;
    }
    cont = 0;
  }
  tentativas++;
}
  printf("\n%d\n",tentativas);

  

  return 0;
}
