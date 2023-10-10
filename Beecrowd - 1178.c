#include <stdio.h>

int main()
{
    double num;
    double lista[100];
    scanf("%lf", &num);
    for(int i = 0; i < 100; i++){
        lista[i] = num;
        num = num/2;
    }
    for(int i = 0; i < 100; i++){
        printf("N[%d] = %.4f\n",i, lista[i]);
    }
    return 0;
}