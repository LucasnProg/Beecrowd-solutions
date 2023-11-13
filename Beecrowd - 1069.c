#include <string.h>
#include <stdio.h>

int main(){
    char express[1001];
    int N, length, answer, parent;

    scanf("%d\n", &N);
    
    for(int i = 0; i < N; ++i){
        scanf("%s\n", express);

        answer = 0;
        parent = 0;
        length = strlen(express);
        for(int j = 0; j < length; ++j){
            if(express[j] == '<'){
                ++parent;
            }else if(express[j] == '>' && parent > 0){
                --parent;
                ++answer;
            }
        }

        printf("%d\n", answer);
    }

    return 0;
}