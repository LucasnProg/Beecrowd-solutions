#include <stdio.h>

int main(void) {
  int a1,a2,a3, tempos[3], temp;
  scanf("%d",&a1); //lê A1
  scanf("%d",&a2); //lê A2
  scanf("%d",&a3); //lê A3
  
  if(a1>=0 && a1<=1000 && a2>=0 && a2<=1000 && a3>=0 && a3<=1000){
  //armazena as possibilidades
  tempos[0] = (a2*2)+(a3*4);  
  tempos[1] = (a1*2)+(a3*2);
  tempos[2] = (a1*4)+(a2*2);
  temp = tempos[0];
  for (int i = 0; i < 3; i++)
	{
		if (tempos[i] < temp)
			temp = tempos[i];
	 }
  printf("%d\n",temp);
  }
  return 0;
}