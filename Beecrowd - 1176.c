#include <stdio.h>

int main(void) {
  int numT, num;
  scanf("%d",&numT);

  while(numT--){
    scanf("%d",&num);
    if (num>=0 && num<=60){
      if(num>=2){
        long long int array[num];
        array[0] = 0;
        array[1] = 1;
        for(int i=2; i<=num;i++){
          array[i] = array[i-2]+array[i-1];
        }
        printf("Fib(%d) = %lli\n",num,array[num]);
      }
       else if(num == 0){printf("Fib(%d) = %d\n",num,0);}  
       else if(num == 1){printf("Fib(%d) = %d\n",num,1);}  
    }
  }
  return 0;
}