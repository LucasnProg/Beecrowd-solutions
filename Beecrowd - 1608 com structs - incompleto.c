#include <stdio.h>

struct Ingredientes
{
    int id;
    int price;
};

struct Bolos
{
    int id;
    int qtdNecessarios;
};

int verificaBolos(int ingredientesBolo[][2], int length, struct Ingredientes arrayIngredientes[], int qtdIngredientes, int dinheiro)
{
    int cakeCont = 0, cakePrice = 0;

    for (int i = 0; i < length; i++) {
        int atual = ingredientesBolo[i][0];
        for (int j = 0; j < qtdIngredientes; j++) {
            if (arrayIngredientes[j].id == atual) {
                cakePrice += (arrayIngredientes[j].price * ingredientesBolo[i][1]);
            }
        }
    }
    if(cakePrice<dinheiro){cakeCont++;}
    while((cakePrice*2)<dinheiro)
    {
        cakeCont++;
    }

    return cakeCont;
}

int main()
{
    int dinheiro, qtdingredientes, qtdBolos;

    scanf("%d %d %d", &dinheiro, &qtdingredientes, &qtdBolos);

    while(qtdBolos--)
    {
        struct Ingredientes arrayIngredientes[qtdingredientes];
        struct Bolos arrayBolos[qtdBolos];
        for (int i = 0; i < qtdingredientes; i++) {
            arrayIngredientes[i].id = i + 1;
            scanf("%d", &arrayIngredientes[i].price);
        }

        for (int j = 0; j < qtdBolos; j++) {
            arrayBolos[j].id = j + 1;
            scanf("%d", &arrayBolos[j].qtdNecessarios);
            int ingredientesPorBolo[arrayBolos[j].qtdNecessarios][2];

            for (int i = 0; i < arrayBolos[j].qtdNecessarios; i++) {
                scanf("%d %d", &ingredientesPorBolo[i][0], &ingredientesPorBolo[i][1]);
            }

            int cakeCont = verificaBolos(ingredientesPorBolo, arrayBolos[j].qtdNecessarios, arrayIngredientes, qtdingredientes, dinheiro);
            printf("%d\n", cakeCont);
        }
    }
    return 0;
}
