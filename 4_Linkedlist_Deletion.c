#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void TraversalLinkedlist(struct Node *ptr)
{
    int i = 1;
    while (ptr->next != NULL)
    {
        printf("Node%d_Element=%d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    }
    printf("Node%d_Element=%d", i, ptr->data);
}

struct Node *DeleteAtFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

struct Node *DeleteAtIndex(struct Node *head, int index)
{
    struct Node *temp = head;
    struct Node *ptr = head->next;
    int i = 1;
    while (i < index - 1)
    {
        temp = temp->next;
        ptr = ptr->next;
        i++;
    }
    temp->next = ptr->next;
    free(ptr);
    return head;
}

struct Node *DeleteAtLast(struct Node *head)
{
    struct Node *temp = head;
    struct Node *ptr = head->next;
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
        temp = temp->next;
    }
    temp->next = NULL;
    free(ptr);
    return head;
}
int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *five = (struct Node *)malloc(sizeof(struct Node));
    struct Node *six = (struct Node *)malloc(sizeof(struct Node));
    struct Node *seven = (struct Node *)malloc(sizeof(struct Node));
    struct Node *eight = (struct Node *)malloc(sizeof(struct Node));
    struct Node *nine = (struct Node *)malloc(sizeof(struct Node));
    struct Node *ten = (struct Node *)malloc(sizeof(struct Node));

    head->data = 10;
    head->next = second;
    second->data = 20;
    second->next = third;
    third->data = 30;
    third->next = fourth;
    fourth->data = 40;
    fourth->next = five;
    five->data = 50;
    five->next = six;
    six->data = 60;
    six->next = seven;
    seven->data = 70;
    seven->next = eight;
    eight->data = 80;
    eight->next = nine;
    nine->data = 90;
    nine->next = ten;
    ten->data = 100;
    ten->next = NULL;

    // for Print Linkeedlist
    printf("\nBefore Deletion Linkedlist :\n");
    TraversalLinkedlist(head);
    printf("\n");

    // Delete At First Linkedlist
    printf("\nAfter Delete At First Node :\n");
    head = DeleteAtFirst(head);
    TraversalLinkedlist(head);
    printf("\n");

    // Delete At Given Index In Linkedlist
    printf("\nAfter Delete Linkedlist At Given Index 5 :\n");
    head = DeleteAtIndex(head, 5);
    TraversalLinkedlist(head);
    printf("\n");

    // Delete At Last linkedlist
    printf("\nAfter Delete Linkedlist At Last Node :\n");
    head = DeleteAtLast(head);
    TraversalLinkedlist(head);

    return 0;
}