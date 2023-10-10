#include <stdio.h>
#include <math.h>

int main() {
    int qtdCursos, atividades, material, campi;
    
    scanf("%d %d %d %d", &qtdCursos, &atividades, &material, &campi);

    int matrixA[qtdCursos][atividades], matrixB[atividades][material], matrixAns[qtdCursos][material];
    for (int i = 0; i < qtdCursos; ++i)
        for (int j = 0; j < atividades; ++j)
            scanf("%d", &matrixA[i][j]);
    
    for (int i = 0; i < atividades; ++i)
        for (int j = 0; j < material; ++j)
            scanf("%d", &matrixB[i][j]);

    for (int i = 0; i < qtdCursos; ++i)
        for (int j = 0; j < material; ++j) {
            matrixAns[i][j] = 0;
            for (int k = 0; k < atividades; ++k)
                matrixAns[i][j] += matrixA[i][k] * matrixB[k][j];
        }

    int matrixC[material][campi], ans[qtdCursos][campi], max[campi];

    for (int i = 0; i < material; ++i)
        for (int j = 0; j < campi; ++j)
            scanf("%d", &matrixC[i][j]);

    for (int i = 0; i < campi; ++i)
        max[i] = 0;

    for (int i = 0; i < qtdCursos; ++i)
        for (int j = 0; j < campi; ++j) {
            ans[i][j] = 0;

            for (int k = 0; k < material; ++k)
                ans[i][j] += matrixAns[i][k] * matrixC[k][j];

            if (ans[i][j] > max[j])
                max[j] = ans[i][j];
        }
    
    for (int i = 0; i < qtdCursos; ++i)
        for (int j = 0; j < campi; ++j)
            printf("%*d%c", (int)(log10(max[j] == 0 ? 1 : max[j]) + 1), ans[i][j], j < campi - 1 ? ' ' : '\n');
    
    return 0;
}
