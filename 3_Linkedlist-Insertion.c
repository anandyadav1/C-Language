#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void LinkedlistTraversal(struct Node *ptr)
{
    int i = 1;
    while (ptr->next != NULL)
    {
        // printf("Node%d",i);
        printf("Node%d_Element= %d \n", i, ptr->data);
        i++;
        ptr = ptr->next;
    }
    printf("Node%d_Element= %d\n", i, ptr->data);
}
struct Node *InsertatFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}
struct Node *InsertatIndex(struct Node *head, int data, int index)
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
struct Node *InsertatLast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    struct Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = ptr;
    ptr->next = NULL;
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

    head->data = 22;
    head->next = second;
    second->data = 33;
    second->next = third;
    third->data = 44;
    third->next = fourth;
    fourth->data = 55;
    fourth->next = five;
    five->data = 66;
    five->next = six;
    six->data = 77;
    six->next = seven;
    seven->data = 88;
    seven->next = NULL;

    // For Print
    printf("Linkedlist Traversal Element :\n");
    LinkedlistTraversal(head);

    printf("\nLinkedlist After Inserted Element :\n");
    head = InsertatFirst(head, 99);
    LinkedlistTraversal(head);

    printf("\nLinkedlist Insert at Given Index 3:\n");
    head = InsertatIndex(head, 500, 3);
    LinkedlistTraversal(head);

    printf("\nLinkedlist Insert at Last Node : \n");
    head = InsertatLast(head, 100);
    LinkedlistTraversal(head);

    return 0;
}
