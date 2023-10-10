#include <stdio.h>

void ordenacaoEspecifica(int lista[], int tamanho) {
    int listaImpar[tamanho];
    int contadorImpares = 0;

    for (int i = 0; i < tamanho; i++) {
        if (lista[i] % 2 != 0) {
            listaImpar[contadorImpares] = lista[i];
            contadorImpares++;
        }
    }
    for (int i = 0; i < contadorImpares - 1; i++) {
        for (int j = i + 1; j < contadorImpares; j++) {
            if (listaImpar[i] < listaImpar[j]) {
                int temp = listaImpar[i];
                listaImpar[i] = listaImpar[j];
                listaImpar[j] = temp;
            }
        }
    }
    int esquerda = 0, direita = contadorImpares - 1, contEspaco = 0;
    while (esquerda <= direita) {
        if (contEspaco > 0) {
            printf(" ");
        }
        printf("%d", listaImpar[esquerda]);
        if (esquerda != direita) {
            printf(" ");
            printf("%d", listaImpar[direita]);
        }
        esquerda++;
        direita--;
        contEspaco++;
    }
  printf("\n");
}

int main() {
    int numN;
    scanf("%d", &numN);

    for (int t = 0; t < numN; t++) {
        int tamanho;
        scanf("%d", &tamanho);
        int lista[tamanho];

        for (int i = 0; i < tamanho; i++) {
            scanf("%d", &lista[i]);
        }

        ordenacaoEspecifica(lista, tamanho);
    }

    return 0;
}
