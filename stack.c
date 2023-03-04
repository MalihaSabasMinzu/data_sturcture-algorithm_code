#include <stdio.h>
#include <conio.h>

void displayStack(int stack[], int top)
{
    printf("\nThe Stack is:\n");
    for (int i = 0; i <= top; i++)
    {
        printf("%d\t", stack[i]);
    }
    printf("\n");
}
int push(int stack[], int top, int size)
{
    int ele;
    if (top >= size - 1)
    {
        printf("\n\tSTACK is over flow");
    }
    else
    {
        printf("\nEnter a value to be pushed: ");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
    }
    return top;
}
int pop(int stack[], int top)
{
    if (top <= -1)
    {
        printf("\nStack is under flow");
    }
    else
    {
        printf("\nThe popped elements is %d", stack[top]);
        top--;
    }
    return top;
}

int main()
{
    int size, element, top = -1, num, stop = 1;
    printf("Enter the size of the Stack:\n");
    scanf("%d", &size);
    int stack[size];
    while (stop)
    {
        printf("\n1.push\n2.pop\n3.display\n4.quit.\n");
        num = getche();
        switch (num)
        {
        case '1':
            top = push(stack, top, size);
            break;
        case '2':
            top = pop(stack, top);
            break;
        case '3':
            displayStack(stack, top);
            break;
        case '4':
            stop = 0;
            displayStack(stack, top);
            break;
        default:
            printf("\nPlease Enter a Valid Choice(1-4)\n");
            break;
        }
    }
}