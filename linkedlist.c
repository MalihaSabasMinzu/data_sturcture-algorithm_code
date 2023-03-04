#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraverse(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

void insertInBetween(struct node *head, int index, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)), *p = head;
    ptr->data = data;
   
    for (int i = 0; i < index; i++)
    {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
}
void insertInNodeAfter(struct node *node, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->next = node->next;
    node->next = ptr;
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 69;
    head->next = first;
    first->data = 79;
    first->next = second;
    second->data = 89;
    second->next = third;
    third->data = 99;
    third->next = NULL;

    linkedListTraverse(head);
    insertInBetween(head, 3, 49);
    printf("\n");
    linkedListTraverse(head);
    insertInNodeAfter(second,59);
    printf("\n");
    linkedListTraverse(head);

    return 0;
}