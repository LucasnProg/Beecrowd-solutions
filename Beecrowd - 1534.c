#include <stdio.h>
 
int main() {
 
    int numN;
    while((scanf("%d",&numN))!= EOF){
      int matriz[numN][numN];
      for(int i = 0; i<numN; i++){
        for(int j=0; j<numN; j++){
          if((i+j) == (numN-1)){
            matriz[i][j] = 2;
          }
          else if(i == j){
            matriz[i][j] = 1;
          }
          else{
            matriz[i][j] = 3;
          }
        }
      }
      for(int i = 0; i<numN; i++){
        for(int j=0; j<numN; j++){
          printf("%d",matriz[i][j]);
        }
        printf("\n");
      }
    }
    return 0;
}