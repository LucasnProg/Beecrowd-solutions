#include <stdio.h>
#include <string.h>

int main() {
  int t, n;
  char alimento[20];

  
  do {
    scanf("%d", &t);
    int totalVitamina = 0;
    for (int i = t; i > 0; i--) {
      scanf("%d", &n);
      fgets(alimento, 20, stdin);
      if (alimento[0] == 's')
        totalVitamina += (n * 120);
      else if (alimento[0] == 'm' && alimento[1] == 'o')
        totalVitamina += (n * 85);
      else if (!strcmp(alimento, "mamao\n"))
        totalVitamina += (n * 85);
      else if (alimento[0] == 'g')
        totalVitamina += (n * 70);
      else if (!strcmp(alimento, "manga\n"))
        totalVitamina += (n * 56);
      else if (alimento[0] == 'l')
        totalVitamina += (n * 50);
      else
        totalVitamina += (n * 34);
    }
  if (t!=0){
    if (totalVitamina < 110) {
      printf("Mais %d mg\n", 110 - totalVitamina);
    } else if (totalVitamina > 130) {
      printf("Menos %d mg\n", totalVitamina - 130);
    } else {
      printf("%d mg\n", totalVitamina);
    }
  }
  } while (t != 0);

  return 0;
}