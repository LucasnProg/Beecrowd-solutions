#include <stdio.h>

int calls = 0, cont = 0;
int fibFunction(int times)
{
    if (times == 0)
    {
        calls++;
        return 0;
    }
    else if (times == 1)
    {
        cont++;
        calls++;
        return 1;
    }
    else
    {
        calls++;
        return (fibFunction(times - 1) + fibFunction(times - 2));
    }
}

int main()
{
    int testCases, times;
    scanf("%d", &testCases);
    while (testCases--)
    {
        calls = 0;
        cont = 0;
        scanf("%d", &times);
        fibFunction(times);
        printf("fib(%d) = %d calls = %d\n", times, calls - 1, cont);
    }

    return 0;
}