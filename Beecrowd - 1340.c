#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXSIZE 1000

typedef struct {
    int data;
    int priority;
} PQueueItem;

typedef struct {
    int qtd;
    PQueueItem data[MAXSIZE];
} PriorityQueue;

typedef struct {
    int data[MAXSIZE];
    int front, rear;
} Queue;

typedef struct {
    int data[MAXSIZE];
    int top;
} Stack;

void queueInit(Queue *q) {
    q->front = q->rear = 0;
}

void enqueue(Queue *q, int x) {
    q->data[q->rear++] = x;
}

int dequeue(Queue *q) {
    return q->data[q->front++];
}

void stackInit(Stack *s) {
    s->top = 0;
}

void push(Stack *s, int x) {
    s->data[s->top++] = x;
}

int pop(Stack *s) {
    return s->data[--s->top];
}

PriorityQueue* priorityQueueInit() {
    PriorityQueue *pq = (PriorityQueue*)malloc(sizeof(PriorityQueue));
    pq->qtd = 0;
    return pq;
}

void pushPriorityQueue(PriorityQueue *pq, int priority, int x) {
    if (pq->qtd < MAXSIZE) {
        int idx = pq->qtd++;
        pq->data[idx].data = x;
        pq->data[idx].priority = priority;
        int parent;
        while (idx > 0) {
            parent = (idx - 1) / 2;
            if (pq->data[parent].priority < pq->data[idx].priority) {
                // Swap
                PQueueItem temp = pq->data[parent];
                pq->data[parent] = pq->data[idx];
                pq->data[idx] = temp;
            }
            else
                break;
            idx = parent;
        }
    }
}

int topPriorityQueue(PriorityQueue *pq) {
    if (pq->qtd > 0)
        return pq->data[0].data;
    return 0;
}

void popPriorityQueue(PriorityQueue *pq) {
    if (pq->qtd > 0) {
        pq->qtd--;
        pq->data[0] = pq->data[pq->qtd];
        int parent = 0;
        while (1) {
            int child = 2 * parent + 1;
            if (child >= pq->qtd)
                break;
            if (child + 1 < pq->qtd && pq->data[child].priority < pq->data[child + 1].priority)
                child++;
            if (pq->data[parent].priority < pq->data[child].priority) {
                PQueueItem temp = pq->data[parent];
                pq->data[parent] = pq->data[child];
                pq->data[child] = temp;
            }
            else
                break;
            parent = child;
        }
    }
}

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int x, command, i;
        bool isQueue = true, isStack = true, isPQueue = true;
        PriorityQueue *priorityQueue = priorityQueueInit();
        Queue queue;
        Stack stack;
        queueInit(&queue);
        stackInit(&stack);

        for (i = 0; i < n; ++i) {
            scanf("%d %d", &command, &x);

            if (command == 1) {
                pushPriorityQueue(priorityQueue, x, x);
                push(&stack, x);
                enqueue(&queue, x);
            } else {
                if (pop(&stack) != x) isStack = false;
                if (dequeue(&queue) != x) isQueue = false;
                if (topPriorityQueue(priorityQueue) != x) isPQueue = false;
                popPriorityQueue(priorityQueue);
            }
        }

        if (!isStack && !isQueue && !isPQueue)
            printf("impossible\n");
        else if ((isStack && isPQueue) || (isStack && isQueue) || (isPQueue && isQueue))
            printf("not sure\n");
        else if (isPQueue)
            printf("priority queue\n");
        else if (isQueue)
            printf("queue\n");
        else if (isStack)
            printf("stack\n");
    }

    return 0;
}