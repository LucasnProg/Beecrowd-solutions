#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int maxProfit(int receitas[], int custoPorDia, int N) {
    int max_ganho = 0;
    int max_temp = 0;
    
    for (int i = 0; i < N; i++) {
        max_temp = max(0, max_temp + receitas[i] - custoPorDia);
        max_ganho = max(max_ganho, max_temp);
    }
    
    return max_ganho;
}

int main() {
    int N, custoPorDia;
    
    while (scanf("%d", &N) != EOF) {
        scanf("%d", &custoPorDia);
        
        int receitas[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &receitas[i]);
        }
        
        int resultado = maxProfit(receitas, custoPorDia, N);
        printf("%d\n", resultado);
    }
    
    return 0;
}
