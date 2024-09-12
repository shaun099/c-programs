/**
 * @file queue.c
 * @brief Implementation of a simple queue data structure using an array.
 *
 * This program provides a basic implementation of a queue using an array.
 * It includes functions for enqueue, dequeue, and display operations.
 *
 *  OVERFLOW = Queue is full.
 *  UNDERFLOW = Queue is empty.
 *
 */
#include <stdio.h>
#define MAX 10
int queue[MAX];
int front = -1;
int rear = -1;

// Enqueues a value into the queue.
// value:-The value to be enqueued.
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

// Dequeues a value from the queue.
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

// Displays the contents of the queue.
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

// The main function.
// This function provides a menu-driven interface for the user to interact with the queue.
// return 0 on successful exit.
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
/**
 * @example
 * To use this program, simply compile and run it. Then, follow the menu prompts to enqueue, dequeue, and display values.
 *
 * For example, to enqueue the value 5, select option 1 and enter 5 when prompted.
 *
 * To dequeue a value, select option 2.
 *
 * To display the contents of the queue, select option 3.
 *
 * To exit the program, select option 4.
 */