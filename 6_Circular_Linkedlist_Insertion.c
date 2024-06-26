#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void TraversalCircularLinkedlist(struct Node *head)
{
    struct Node *ptr = head;
    int i = 1;
    do
    {
        printf("Node%d_Element=%d\n", i, ptr->data);
        ptr = ptr->next;
        i++;
    } while (ptr != head);
}

struct Node *InsertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;

    struct Node *temp = head->next;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
}

struct Node *InsertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *temp = head;
    int i = 1;
    while (i < index - 1)
    {
        temp = temp->next;
        i++;
    }
    ptr->next = temp->next;
    temp->next = ptr;
    return head;
}

struct Node *InsertAtLast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data; // ptr->info=data
    struct Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = head;

    return head;
}
int main()
{

    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *five = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second Nodes
    head->data = 20;
    head->next = second;

    // Link second and third Nodes
    second->data = 30;
    second->next = third;

    // Link third and fourth Nodes
    third->data = 50;
    third->next = fourth;

    // Link fourth and five Nodes
    fourth->data = 60;
    fourth->next = five;

    // Terminate thelist at the third Nodes
    five->data = 70;
    five->next = head;

    // For print Circular Linkedlist
    printf("\nTraversal Circular Linkedlist :\n");
    TraversalCircularLinkedlist(head);
    // printf("\n");

    // Insert At first Node
    printf("\nInsert At First Node In Circular Linkedlist :\n");
    head = InsertAtFirst(head, 10);
    TraversalCircularLinkedlist(head);
    // printf("\n");

    // Insert At Given Index
    printf("\nAt Given Index 4 In Circular Linkedlist :\n");
    head = InsertAtIndex(head, 40, 4);
    TraversalCircularLinkedlist(head);

    // Insert At Last Node
    printf("\nInsert At Last Node In Circular Linkedlist :\n");
    head = InsertAtLast(head, 80);
    TraversalCircularLinkedlist(head);

    return 0;
}