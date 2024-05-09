#include <stdio.h>
#define MAX 50

int top = -1, inp_array[MAX];
void push();
void pop();
void display();

int main()
{
    int choice;
    printf("Perform operations on the stack:");
    printf("\n1.Push the element\n2.Pop the element\n3.Display\n4.Exit\n");

    while (1)
    {
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display ();
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid choice!!");
        }
    }
}

void push()
{
    int x;

    if (top == MAX - 1)
    {
        printf("\nOverflow!!");
    }
    else
    {
        printf("Enter the add element: ");
        scanf("%d", &x);
        top = top + 1;
        inp_array[top] = x;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("\nPopped element: %d", inp_array[top]);
        top = top - 1;
    }
}

void display()
{
    if (top == -1)
    {
        printf("\nUnderflow!!");
    }
    else
    {
        printf("Display elements: ");
        for (int i = top; i >= 0; --i)
            printf("%d\n", inp_array[i]);
    }
}
