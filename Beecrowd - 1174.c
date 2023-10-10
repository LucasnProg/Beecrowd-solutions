#include <stdio.h>

int main(void) {
  float listaA[100];

  for (int i =0; i<100;i++){
    scanf("%f",&listaA[i]);
  }
  for(int i=0;i<100;i++){
    if(listaA[i]<=10){
      printf("A[%d] = %.1f\n",i,listaA[i]);
    }
  }
  return 0;
}