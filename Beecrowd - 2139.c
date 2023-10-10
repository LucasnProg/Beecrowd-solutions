#include <stdio.h>

int main(void) {
  int dia,mes, faltam;

  while(scanf("%d%d", &mes, &dia) != EOF){
    if (mes==12){
      if(dia == 25){
        printf("E natal!\n");
      }
      else if (dia==24){
        printf("E vespera de natal!\n");
      }
      else if (dia>25){
        printf("Ja passou!\n");
      }
      else{
        faltam = 25-dia;
        printf("Faltam %d dias para o natal!\n",faltam);
      }
    }
  
    else if (mes == 11){
      faltam = (25-dia)+30;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 10){
      faltam = (25-dia)+61;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 9){
      faltam = (25-dia)+91;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 8){
      faltam = (25-dia)+122;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 7){
      faltam = (25-dia)+153;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 6){
      faltam = (25-dia)+183;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 5){
      faltam = (25-dia)+214;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 4){
      faltam = (25-dia)+244;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 3){
      faltam = (25-dia)+275;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 2){
      faltam = (25-dia)+304;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
    else if (mes == 1){
      faltam = (25-dia)+335;
      printf("Faltam %d dias para o natal!\n",faltam);
    }
  }
  return 0;
}