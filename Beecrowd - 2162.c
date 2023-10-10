#include <stdio.h>

int main() {
  int numN, h,atual, val,maior,menor;
  scanf("%d",&numN);
  int alturas[numN];
  if (numN>1 && numN<=100)
  {
    for(int i = 0; i< numN;i++)
    {
        scanf("%d", &h);
        if(h>=-10000 && h<=10000){
          alturas[i] = h;
        }
        else
        {
          printf("1\n");
          break;
        }
    }
    int alternados = 1;
    if(numN>2)
    {
      for(int i=2; i<numN; i++)
          {
          if(alturas[i] >= alturas[i-1] && alturas[i-1] >= alturas[i-2])
            {
              alternados = 0;
              break;
            }
              else if(alturas[i] <= alturas[i-1] && alturas[i-1] <= alturas[i-2])
            {
              alternados = 0;
              break;
            }
          }
    }
    else{
      if(alturas[0]==alturas[1]){
        alternados=0;
      }
    }
    printf("%d\n",alternados);
  }
  return 0;
}