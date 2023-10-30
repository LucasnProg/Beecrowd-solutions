#include <stdio.h>

int jumps(int numTotal, int passo)
{
    int ultimo = 0;

    for (int i = 2; i <= numTotal; i++)
        ultimo = (ultimo + passo) % i;

    return ultimo;
}


int main()
{
    int numCases, total, salto;

    scanf("%d",&numCases);

    for(int i=1; i<=numCases;i++)
    {
        scanf("%d%d",&total,&salto);

        printf("Case %d: %d\n", i, jumps(total, salto) + 1);

    }   
    
    return 0;
}
