#include <stdio.h>

int findMDC(int num1, int num2)
{
    int resto = 1;
    if (num1>num2)
    {
        while(resto !=0)
        {
            resto = num1 % num2;
            num1 = num2;
            num2 = resto;
        }
        return num1;
    }
    else
    {
        while (resto != 0)
        {
            resto = num2 % num1;
            num2 = num1;
            num1 = resto;
        }
        return num2;
    }
}

int main()
{
   int testCase, stickers1, stickers2, stacks;

   scanf("%d",&testCase); 

    while(testCase--)
    {
        scanf("%d%d", &stickers1,&stickers2);

        stacks = findMDC(stickers1,stickers2);
        printf("%d\n", stacks);
    }
}