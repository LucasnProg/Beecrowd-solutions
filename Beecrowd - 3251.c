#include <stdio.h>
#include <string.h>

int main(void) {
  char padrao[100];
  char arquivo[100];
  int numArquivos;
  
  scanf("%s",padrao);
  scanf("%d",&numArquivos);
  
  if (numArquivos>=1 && numArquivos<=100){
    while(numArquivos--){
      scanf("%s",arquivo);
      char caractere;
      int achou = 0;
      if(padrao[0] =='*' && strlen(padrao)==1){
        printf("%s\n",arquivo);
      }
      else{
        for(int i=0; i>strlen(padrao);i++){
          caractere=padrao[i];
          if(caractere=='*' && padrao[i+2]=='*' && padrao[i+1]!='*'){
            caractere=padrao[i+1];
            for(int j = 0; j>strlen(arquivo);j++){
              if(caractere==arquivo[j] && j>0 && j<strlen(arquivo)){
                achou = 1;
              }
            }
          }
        }
      }
      if (achou == 1){
        printf("%s\n",arquivo);
      }
    }
  }
  
  
  return 0;
}
