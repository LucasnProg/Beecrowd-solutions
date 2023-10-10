#include <stdio.h>

int verificaPrimo(int num) {
    num += 2;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 1;
        }
    }
    return 0;
}

int main(){

    int n, num;
    scanf("%d", &n);
    if (n>=1 && n<=10000){
      while (n--){
          scanf("%d", &num);
          num+=1;
          if (num%7 == 0 && num%2 !=0 && verificaPrimo(num)==0){
            printf("Yes\n");
          }
          else{
            printf("No\n");
          }
      }
    }
  else{
    printf("Num 'n' é inválido");
  }
    return 0;

}