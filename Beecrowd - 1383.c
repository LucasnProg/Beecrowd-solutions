#include <stdio.h>

int main() {
    int numN, cont = 1;
    scanf("%d", &numN);
    while (numN--){
    int sudoku[9][9];
        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                scanf("%d", &sudoku[i][j]);
            }
        }
        int error = 0;
        for(int index1 = 0; index1 < 9; index1++){
            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    if(j != index1){
                        if(sudoku[i][j] == sudoku[i][index1]){
                            error++;
                        }
                    }
                }
            }
        }
        for(int index1 = 0; index1 < 9; index1++){
            for(int i = 0; i < 9; i++){
                for(int j = 0; j < 9; j++){
                    if(j != index1){
                        if(sudoku[j][i] == sudoku[index1][i]){
                            error++;
                        }
                    }
                }
            }
        }
        for(int x = 0;x < 3;x++){  
            for(int y = 0;y < 3; y++ ){
                for(int index1 = x*3; index1 < (x+1)*3; index1++){
                    for(int index2 = y*3; index2 < (y+1)*3; index2++){
                        for(int i = x*3;i < (x+1)*3;i++){
                            for(int j = y*3;j < (y+1)*3;j++){
                                if(j != index2 || i != index1){
                                    if(sudoku[i][j] == sudoku[index1][index2]){
                                        error++;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("Instancia %d\n", cont);
        if(error != 0){
            printf("NAO\n");
        }
        else
            printf("SIM\n");
        printf("\n");
        cont++;
    }    
  return 0;
}