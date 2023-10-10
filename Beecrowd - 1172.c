#include <stdio.h>

int main(void) {
  int vetorX[10];

  for (int i=0;i<10;i++)
  {
    scanf("%d",&vetorX[i]);  
  }

  for (int i=0;i<10;i++)
    {
      if(vetorX[i]<1){
        vetorX[i] = 1;
      }
    }
  for (int i=0;i<10;i++){
    printf("X[%d] = %d\n",i,vetorX[i]);
  }
  return 0;
}