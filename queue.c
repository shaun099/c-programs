#include <stdio.h>
#define MAX 10
int queue[MAX];
int front = -1;
int rear = -1;

void enqueue(int value)
{
    if (rear == MAX - 1)
    {
        printf("OVERFLOW\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = value;
        printf("%d is entered\n", value);
    }
    else
    {
        rear++;
        queue[rear] = value;
        printf("%d is entered\n", value);
    }
}
void dequeue()
{
    if (rear == -1 && front == -1)
    {
        printf("UNDERFLOW\n");
    }
    if (rear == front)
    {
        int item = queue[rear];
        printf("%d is poped\n", item);
        front = -1;
        rear = -1;
    }
    else
    {
        int item = queue[front];
        printf("%d is poped\n", item);
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        printf("----------\n");
        printf("QUEUE:");
        for (int i = front; i < rear + 1; i++)
        {
            printf("%d  ", queue[i]);
        }
        printf("\n-----------\n");
    }
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("enter the choice:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("enter value to enqueue:\n");
            scanf("%d", &value);
            enqueue(value);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("invalid choice\n");
        }
    }
}