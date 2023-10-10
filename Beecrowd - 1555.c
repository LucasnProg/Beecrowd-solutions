#include <stdio.h>

int main(void) {
  int n, num1, num2, rafael, beto, carlos;
  scanf("%d", &n);
  while (n--){
    scanf("%d%d", &num1, &num2);
    if (num1 >= 1 && num1 <= 100 && num2 >= 1 && num2 <= 100) {
      rafael = (pow(3,2)*pow(num1, 2)) + pow(num2, 2);
      beto = (2 * pow(num1, 2)) + pow((5 * num2), 2);
      carlos = (-100 * num1) + pow(num2, 3);
      if (rafael > carlos && rafael > beto) {
        printf("Rafael ganhou\n");
      } else if (carlos > rafael && carlos > beto) {
        printf("Carlos ganhou\n");
      } else if (beto>carlos && beto > rafael){
        printf("Beto ganhou\n");
      }
    }
  }
  return 0;
}