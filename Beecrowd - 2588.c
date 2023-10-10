#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    while (scanf("%s", palavra) != EOF) {
        int rep[256] = {0}; 
      
        for (int i = 0; palavra[i]; i++) {
            rep[palavra[i]]++;
        }
        int impares = 0;
      
        for (int i = 0; i < 256; i++) {
            if (rep[i] % 2 != 0) {
                impares++;
            }
        }
        if (impares <= 1) {
            printf("0\n");
        } else {
            printf("%d\n", impares - 1);
        }
    }

    return 0;
}
