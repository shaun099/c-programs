#include <stdio.h>
#define MAX 10
int stack[MAX];
int top = -1;

void push(int value)
{
    if (top == MAX - 1)
    {
        printf("OVERFLOW");
    }
    else
    {
        top++;
        stack[top] = value;
        printf("%d is eneterd\n", value);
    }
}
void pop()
{
    if (top < 0)
    {
        printf("UNDERFLOW\n");
    }
    else
    {
        int item = stack[top];
        top--;
        printf("%d is poped\n", item);
    }
}

void display()
{
    if (top < 0)
    {
        printf("UNDERFLOW\n");
    }
    printf("---stack---\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    printf("------------\n");
}

int main()
{
    int choice, value;
    while (1)
    {
        printf("enter your choice\n");
        printf("1.push\n2.pop\n3.display\n4.exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("enter the value to be pushed:");
            scanf("%d", &value);
            push(value);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            return 0;
            break;
        default:
            printf("invalid choice");
        }
    }
}
