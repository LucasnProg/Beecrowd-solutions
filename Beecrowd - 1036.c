#include <stdio.h>
#include <math.h>

double calculaDelta(double a, double b, double c){
  double delta = pow(b,2)+(-4*a*c);
  return delta;
}

double calculaX(double a, double b, double c, double delta, int i){
  double numX;
  if (i==1){
    numX = ((b*-1)+sqrt(delta))/(2*a); 
  }
  else{
    numX = ((b*-1)+(sqrt(delta)*-1))/(2*a); 
  }
  return numX;
}

int main(void) {
  double numA, numB, numC;
  scanf("%lf%lf%lf",&numA,&numB,&numC);
  double delta = calculaDelta(numA,numB,numC);
  if (delta<0 || numA == 0){
    printf("Impossivel calcular\n");
  }
  else{
    double numX1 = calculaX(numA, numB, numC, delta, 1);
    double numX2 = calculaX(numA, numB, numC, delta,2);
    printf("R1 = %.5lf\n",numX1);
    printf("R2 = %.5lf\n",numX2);
    
  }
  return 0;
}