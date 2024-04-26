#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct  Node * top=NULL;

void LinkesdlistTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    if (ptr == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
{
    if (isFull(top))
    {
        printf("Overflow condition in the Stack :\n");
    }
    else
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
}
int pop(struct Node *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Underflow condition in the Stack :\n");
    }
    else
    {
        struct Node *n = ptr;
        top = ptr->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    printf("Push Oeration :\n");
    top = push(top, 25);
    top = push(top, 26);
    top = push(top, 28);
    LinkesdlistTraversal(top);

    int Element=pop(top);
    printf("\nPoped Element is %d :\n", Element);
    LinkesdlistTraversal(top);
    return 0;


}

