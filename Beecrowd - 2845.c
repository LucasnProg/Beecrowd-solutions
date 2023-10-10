#include <stdio.h>

int main(void) {
  int n, a, maior;

  scanf("%d",&n);
  if (n>=1 && n<=10000){
      int lista[n];
      for (int i = 0; i < n; i++) 
      {
        scanf("%d", &lista[i]);
      }
      maior = lista[0];
      for (int x = 0; x < n; x++) {
        if (maior<lista[x]){
          maior = lista[x];
        }
      }
    maior +=1;
    printf("%d\n",maior);
  }
  return 0;
}