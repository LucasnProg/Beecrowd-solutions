#include <stdio.h>
#include<stdbool.h>
#include <math.h>
#include <ctype.h>

int perfectSquare(int num1, int num2){
  double square = sqrt(num1+num2);
  if(square == (int)square){
    return true;
  }
  else{
    return false;
  }
}

int main(void) {
  int testes, vareta;
  scanf("%d",&testes);

  while(testes--)
    {
      scanf("%d",&vareta);
      int current[vareta], values = 1;
      bool loop = true;
      for(int i =0; i<vareta; i++)
        {
         current[i] = 0; 
        }
      current[0] = values;
      
      
      while(loop == true)
        {
        values++;

        for(int i=0; i<vareta; i++)
        {

          if(perfectSquare(values, current[i]) == true)
          {
            current[i] = values;
            break;
          }
          else if (current[i+1]==0)
          {
            current[i+1] = values;
            break;
          }
          else if((i+1) == vareta && perfectSquare(values, current[i])==false)
          {
            values--;
            loop = false;
          }
        }
      }
        printf("%d\n", values);
    }
  return 0;
}