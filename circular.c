#include <stdio.h>
#define MAX 10
int circluar[MAX], front = -1, rear = -1;
// to add to stack
void enqueue(int value)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        circluar[rear] = value;
        printf("\n%d added successfully\n", value);
    }
    else if (front == ((rear + 1) % MAX))
    {
        printf("\nOVERFLOW\n");
    }
    else
    {
        rear = ((rear + 1) % MAX);
        circluar[rear] = value;
        printf("\n%d added successfully\n", value);
    }
}
// to remove from stack
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("\nUNDERFLOW\n");
    }
    else if (front == rear)
    {
        printf("\n%d removed successfully\n", circluar[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\n%d removed successfully\n", circluar[front]);
        front = ((front + 1) % MAX);
    }
}
// display stack
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("\nUNDERFLOW\n");
    }
    else
    {
        printf("========================\n");
        printf("\nCIRCULAR-QUEUE:");
        int i = front;
        while (i != rear)
        {
            printf("%d\t", circluar[i]);
            i = ((i + 1) % MAX);
        }
        printf("%d", circluar[rear]);
        printf("\n========================\n");
    }
}
int main()
{
    int choice, value;

    while (1)
    {
        printf("===============\n");

        printf("1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n\n>>Enter your choice:");
        scanf("%d", &choice);
        printf("\n===============\n");
        switch (choice)
        {
        case 1:
            printf("enter value to add:");
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
            printf("\nexiting..!!\n");
            return 0;
            break;
        default:
            printf("\ninvalid choice...!!\n");
            break;
        }
    }
    return 0;
}