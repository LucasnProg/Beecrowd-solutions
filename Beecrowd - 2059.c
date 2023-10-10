#include <stdio.h>

int main(void) {
  int p,j1,j2,r,a;
  scanf("%d%d%d%d%d",&p,&j1,&j2,&r,&a);
  if (p>=0 && p<=1 && r>=0 && r<=1 && a>=0 && a<=1 && j1 >=1 && j1<=100 && j2 >=1 && j2<=100)
  {
    if (r == 1 && a == 1)
    {
      printf("Jogador 2 ganha!\n");
    }
    else if (r == 1 && a==0)
    {
      printf("Jogador 1 ganha!\n");
    }
    else if (r==0 && a==1)
    {
      printf("Jogador 1 ganha!\n");
    }
    else if (r==0 && a==0)
    {
      if (p==1 && ((j1+j2)%2)==0)
      {
      printf("Jogador 1 ganha!\n");
      }
      else if (p==0 && ((j1+j2)%2)!=0)
      {
      printf("Jogador 1 ganha!\n");  
      }
      else
      {
        printf("Jogador 2 ganha!\n");
      }
    }
    }
  return 0;
}