#include <stdio.h>
#include <stdlib.h>

void enqueue(int array[], int *front, int *rear, int size)
{
    int value;
    if (*rear == size - 1 || *rear + 1 == *front)
        printf("Queue is full.\n");
    else
    {
        printf("Enter the value to be inserted = ");
        scanf("%d", &value);
        *front = 0;
        ++*rear;
        array[*rear] = value;
        printf("Inserted element: %d\n", array[*rear]);
    }
}
void dequeue(int array[], int *front, int *rear)
{
    if (*front == -1)
    {
        printf("No element to delete.\n");
    }
    else
    {
        printf("Deleted element: %d\n", array[*front]);
        (*front)++;
        if (*front > *rear)
            *front = *rear = -1;
    }
}
void display(int array[], int *front, int *rear)
{
    if (*rear == -1)
    {
        printf("Queue is empty!\n");
    }
    else
    {
        printf("Elements in the queue: ");
        for (int i = *front; i <= *rear; i++)
        {
            printf("%d ", array[i]);
        }
    }
}
int main()
{
    int n, size, top = -1, bot = -1;
    printf("Please enter the size: ");
    scanf("%d", &size);
    int array[size];
    do
    {
        printf("\n1. ENQUEUE\n2. DEQUEUE\n3. DISPLAY QUEUE\n4. Exit\nWhat do you want? : ");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            enqueue(array, &top, &bot, size);
            break;
        case 2:
            dequeue(array, &top, &bot);
            break;
        case 3:
            display(array, &top, &bot);
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice!");
            break;
        }

    } while (1);
    return 0;
}