#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Stack {
    char data[1000];
    int top;
};

void push(struct Stack* stack, char value) {
    stack->data[++stack->top] = value;
}

char pop(struct Stack* stack) {
    return stack->data[stack->top--];
}

char top(const struct Stack* stack) {
    return stack->data[stack->top];
}

int main() {
    int n;
    char input[1000], output[1000];
    struct Stack pilha;
    pilha.top = -1;

    while (scanf("%d", &n) && n) {
        for (int i = 0; i < n; i++)
            scanf(" %c", &input[i]);
        for (int i = 0; i < n; i++)
            scanf(" %c", &output[i]);
        input[n] = output[n] = '\0';
        int i = 0, j = 0;

        while (true) {
            if (pilha.top != -1 && j < n && top(&pilha) == output[j]) {
                pop(&pilha);
                printf("R");
                j++;
            } else if (i < n) {
                push(&pilha, input[i]);
                printf("I");
                i++;
            } else
                break;
        }

        if (pilha.top == -1)
            printf("\n");
        else
            printf(" Impossible\n");

        pilha.top = -1;
    }

    return 0;
}


/*
4
e t d a
d a t e
5
o s t a p
p a t o s
0
*/