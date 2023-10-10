#include <stdio.h>
#include <math.h>


int main(void) {
  unsigned short int numN, length, cont=4;
  scanf("%hu", &numN);
  
  if(numN <= 100)
  {
    while(numN--)
    {
      scanf("%hu",&length);
        long double matrix[length][length], element;
        for(int i=0; i<length; i++)
        {
          for(int j=0; j<length; j++)
            {
              scanf("%Lf",&element);
              matrix[i][j] = element*element;
            }
        }
        //printa a matriz
        printf("Quadrado da matriz #%hu:\n",cont);
        for(int i=0; i<length; i++)
        {
          for(int j=0; j<length; j++)
            {
              //maior da coluna
              long double largest = 0;
              for(int row=0; row<length; row++){
                if(matrix[row][j] > largest)
                  largest = matrix[row][j];
              }
            int lenLargest = floor(log10(largest)) + 1;
            if (matrix[i][j] == largest)
                printf("%.0Lf", matrix[i][j]);
            else
                printf("%*.0Lf", lenLargest, matrix[i][j]);
            if (j < length-1)
					     printf(" ");
            }
			   printf("\n");
        }
      
      cont++;
      if(numN !=0)
        printf("\n");
    }
  }
  return 0;
}

