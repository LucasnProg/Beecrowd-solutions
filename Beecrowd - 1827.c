#include <stdio.h>

int main(void) {
  int length;

  while(scanf("%d",&length) != EOF){
    if(length%2 != 0 && length>=5 && length<=101){
      int matrix[length][length];
      
      for(int i = 0; i<length; i++){
        for(int j = 0; j<length; j++){
         if (i==j)
           matrix[i][j] = 2;
         else if((i+j) == (length-1))
          matrix[i][j] = 3;
         else
           matrix[i][j] = 0;
        }
      } 

      int crumb = length/3;

      for(int i= crumb; i<(length - crumb); i++){
        for(int j= crumb; j<(length - crumb); j++){
          matrix[i][j] = 1;
        }
      }

      matrix[length/2][length/2] = 4;
      
      for(int i = 0; i<length; i++){
        for(int j=0; j<length; j++){
          printf("%d",matrix[i][j]);
        }
        printf(" \n");
    }
  }
        printf("\n");
  }
  return 0;
}