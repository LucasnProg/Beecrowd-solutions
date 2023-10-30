#include <stdio.h>

int maior(int array[], int length){
    int maior = 0;
    for(int i = 0; i < length; i++){
        if(array[i]> maior){
            maior = array[i];
        }
    }
    return maior;
}

int main(){
    int numN;
    scanf("%d",&numN);
    int dinheiro,qtdIngredientes,qtdBolos;
    while(numN--){
        scanf("%d%d%d", &dinheiro, &qtdIngredientes, &qtdBolos);
        int price[qtdIngredientes];
        for(int j = 0; j < qtdIngredientes; j++){
            scanf("%d",&price[j]);
        }
        int custoBolo[qtdBolos],qi;
        for(int j = 0; j < qtdBolos; j++){
            scanf("%d",&qi);
            custoBolo[j] = 0;
            for(int k = 0; k < qi; k++){
                int qiPosicao,qiQuantidade;
                scanf("%d%d",&qiPosicao,&qiQuantidade);
                custoBolo[j] += price[qiPosicao] * qiQuantidade;
            }
        }
        int bolosproduzidos[qtdBolos];
        for(int j = 0; j < qtdBolos; j++){
            bolosproduzidos[j] = dinheiro/custoBolo[j];
        }
        printf("%d\n", maior(bolosproduzidos,qtdBolos));
    }
}
