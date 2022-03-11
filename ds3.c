#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int key;
    struct Node *left, *right;
};

struct Queue
{
    int size;
    int front;
    int rear;
    int *Q;
};
void create(struct Queue *q, int size)
{
    q->size = size;
    q->front = q->rear = -1;
    q->Q = (int *)malloc(q->size * sizeof(int));
}
void push(struct Queue *q, int x)
{
    if (q->rear == q->size - 1)
        printf("Queue is Full");
    else
    {
        q->rear++;
        q->Q[q->rear] = x;
    }
}
int pop(struct Queue *q)
{
    int x = -1;

    if (q->front == q->rear)
        printf("Queue is Empty\n");
    else
    {
        q->front++;
        x = q->Q[q->front];
    }
    return x;
}

void printNodes(struct Node *root)
{
    if (root == NULL)
    {
        return;
    }

    printf("%d", root->key);

    struct Queue q1, q2;

    create(&q1, 10);
    create(&q2, 10);

    if (root->left && root->right)
    {
        push(&q1, root->left);
        push(&q2, root->right);
    }
}

int main()
{
}