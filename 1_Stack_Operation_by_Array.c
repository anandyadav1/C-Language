#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

// For cheak Empty or Not
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1; // True
    }
    else
    {
        return 0; // False
    }
}

// for cheak Full or Not
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1; // True
    }
    else
    {
        return 0; // False
    }
}

// Pushing Operation
void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("\nStack overflow ! Cannot Push Element of %d to the Stack :\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

// Pop Operation
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("\nStack Underflow ! Cannot poped from Stack :\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int main()
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));

    // For printing

    printf("\nStack has been created succcesfully :\n");
    printf("\nBefore Pushing, Full :\n%d\n", isFull(sp));
    printf("\nBefore Pushing, Empty :\n%d\n", isEmpty(sp));

    // Element of Push
    push(sp, 30);
    push(sp, 32);
    push(sp, 34);
    push(sp, 36);
    push(sp, 38);
    push(sp, 40);
    push(sp, 42);
    push(sp, 44);
    push(sp, 46);
    push(sp, 48); //--->Pushed 10 values
    push(sp, 50); // Stack overflow since size of Array only 10
    push(sp, 52); // Stack overflow since size of Array only 10

    printf("\nWhat is stack Full :\n%d\n", isFull(sp));
    printf("\nWhat is stack Empty :\n%d\n", isEmpty(sp));

    // Foe pop operation
    printf("\nPoped Operstion :\n");
    printf("Poped Element of %d From Stack :\n", pop(sp));
    printf("Poped Element of %d From Stack :\n", pop(sp));

    // Again Cheak
    printf("\nCheak Stack Full or Not :\n ");
    printf("What is stack Full :\n%d\n", isFull(sp));
    printf(" What is stack Empty :\n%d\n", isEmpty(sp));

    return 0;
}