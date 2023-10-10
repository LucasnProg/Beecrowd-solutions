#include <stdio.h>

int main(void) {
  int n,c,a,b,y;
  int anoMinimo = 1948;
  int anoMaximo = 2008;
  int resultado = -1; 
  scanf("%d%d",&n,&c);
  int listaA[c],listaB[c],listaY[c];
  if (n>=4 && n <=400){
    for(int i=0; i<c;i++){
      scanf("%d%d%d",&a,&b,&y);
      if(a>=1 && b>a && b<=n && y>1948 && y<2008){
        listaA[i]=a;
        listaB[i]=b;
        listaY[i]=y;
      }
    }

    while (anoMinimo <= anoMaximo) {
        int meioAno = (anoMinimo + anoMaximo) / 2;
        int contadorPrimeiroGrupo = 0;
        int contadorSegundoGrupo = 0;

        for (int i = 0; i < c; i++) {
            if (listaY[i] < meioAno) {
                contadorPrimeiroGrupo++;
            } else {
            if (listaA[i] <= n / 3 && listaB[i] <= n / 3) {
              contadorSegundoGrupo++;
               }
          }
    }

         if (contadorPrimeiroGrupo >= (2 * n) / 3 && contadorSegundoGrupo >= (2 * n) / 3) {
           resultado = meioAno;
           anoMaximo = meioAno;
          } else {
            anoMinimo = meioAno + 1;
          }
      }

    if (resultado != -1) {
      printf("%d\n", resultado);
    } else {
       printf("Impossible\n");
    }
  }
  return 0;
}