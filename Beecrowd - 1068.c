#include <string.h>
#include <stdio.h>

int main(){
    char express[1001];
    int i, length, parent;

    while(scanf("%s\n", express) != EOF){
        parent = 0;
        length = strlen(express);

        for(i = 0; i < length; ++i){
            if(express[i] == '(')
            {
                parent++;
            }
            else if(express[i] == ')')
            {
                if(parent > 0)  
                    parent--;
                else                
                    break;
            }
        }

        if(i == length && parent == 0)
            printf("correct\n");
        else 
            printf("incorrect\n");
    }

    return 0;
}