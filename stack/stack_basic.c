#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

void push()
{
    int x;
    if(top == SIZE-1)
    {
        printf("Stack is full\n");
    }
    else
    {
        printf("Enter value: ");
        scanf("%d",&x);
        top++;
        stack[top] = x;
        printf("Inserted\n");
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Deleted element is %d\n", stack[top]);
        top--;
    }
}

void display()
{
    int i;
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Stack elements:\n");
        for(i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int ch;

    do
    {
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: break;
            default: printf("Invalid choice\n");
        }

    }while(ch != 4);

    return 0;
}