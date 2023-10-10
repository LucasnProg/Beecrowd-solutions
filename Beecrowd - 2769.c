#include <stdio.h>
//Função que retorna o menor tempo
int menorTempo(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int numN; // armazena o número de etapas
    // while que testa 
    while (scanf("%d", &numN) != EOF) { 
        int e1, e2; // Entrada dos tempos
        scanf("%d %d", &e1, &e2);

        int linha1[numN], linha2[numN]; // Tempos de cada etapa nas linhas de produção
        for (int i = 0; i < numN; i++) {
            scanf("%d", &linha1[i]); // Leitura dos tempos da linha 1
        }
        for (int i = 0; i < numN; i++) {
            scanf("%d", &linha2[i]); // Leitura dos tempos da linha 2
        }

        int transicao1[numN - 1], transicao2[numN - 1]; // Tempos de transição entre as linhas
        for (int i = 0; i < numN - 1; i++) {
            scanf("%d", &transicao1[i]); // Leitura dos tempos de transição da linha 1 para linha 2
        }
        for (int i = 0; i < numN - 1; i++) {
            scanf("%d", &transicao2[i]); // Leitura dos tempos de transição da linha 2 para linha 1
        }

        int saida1, saida2; // Tempos de saída das linhas de produção
        scanf("%d %d", &saida1, &saida2);

        int dp[2][numN]; // Matriz de programação dinâmica para armazenar os tempos mínimos
        dp[0][0] = e1 + linha1[0]; // Tempo inicial na linha 1
        dp[1][0] = e2 + linha2[0]; // Tempo inicial na linha 2

        for (int i = 1; i < numN; i++) {
            dp[0][i] = menorTempo(dp[0][i - 1] + linha1[i], dp[1][i - 1] + transicao2[i - 1] + linha1[i]);
            dp[1][i] = menorTempo(dp[1][i - 1] + linha2[i], dp[0][i - 1] + transicao1[i - 1] + linha2[i]);
        }

        int tempoFinal = menorTempo(dp[0][numN - 1] + saida1, dp[1][numN - 1] + saida2);
        printf("%d\n", tempoFinal);
    }

    return 0;
}
