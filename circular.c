/**
 * @file circular_queue.c
 * @brief Implementation of a circular queue in C.
 *
 * This program provides a menu-driven interface to interact with a circular queue.
 * The queue is implemented as an array of integers, and the front and rear indices
 * are used to keep track of the queue's state.
 */
#include <stdio.h>
#define MAX 10
int circluar[MAX], front = -1, rear = -1;
/**
 * Enqueues an element into the circular queue.
 *
 * value:-The value to be enqueued.
 */
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
/**
 * This function removes an element from the circular queue. If the queue is empty,
 * it prints an underflow message.
 */
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
/**
 * This function prints the elements of the circular queue.
 *
 */
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
/**
 * The main function.
 *
 * This function provides a menu-driven interface to interact with the circular queue.
 *
 * return 0 on successful execution.
 */
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
/**
 * @example
 * To use this program, simply compile and run it. Then, follow the menu-driven interface to interact with the circular queue.
 * For example, to enqueue an element, select option 1 and enter the value to be added.
 * To dequeue an element, select option 2.
 * To display the elements of the queue, select option 3.
 * To exit the program, select option 4.
 */