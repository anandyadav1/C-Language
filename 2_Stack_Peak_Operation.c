#include<stdio.h>
#include<stdlib.h>

struct  stack {
    int size;
    int top;
    int *arr;
};

//Cheaking for stack Empty or Not
int isEmpty(struct stack *ptr) {
    if(ptr->top==-1){
        return 1;
    }
    else {
        return 0;
    }
}

//Cheaking for stack Full or Not
int isFull(struct stack *ptr) {
    if(ptr->top==ptr->size -1){
        return 1;
    }
    else {
        return 0;
    }
}

//Pushing operation
void push (struct stack *ptr, int val){
    if(isFull(ptr)){
        printf("\nOverflow condition ! Cannot push Element %d in stack :\n",val);
    }
    else {
        ptr->top++;
        ptr->arr[ptr->top] =val;
    }
}

//Poped Operation
int pop (struct stack * ptr) {
    if(isEmpty(ptr)){
        printf("\nUnderflow condition ! Cannot poped Element in stack :\n");
        return -1;
    }
    else {
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

//peak Operation
int peek(struct stack *sp ,int i) { 
    int arrayInd=sp->top-i+1;
    if(arrayInd<0) {
        printf("Invalid argument :\n");
    }
    else {
        return sp->arr[arrayInd];

    }
    
}


int main() {
    struct stack *sp =(struct stack *)malloc(sizeof (struct stack));
    sp->size=50;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size *sizeof(int));

    printf("\nStack has been created succesfull :\n");
    printf("\nBefore Pushing, Full :\n%d\n", isFull(sp));
    printf("\nBefore Pushing, Empty :\n%d\n", isEmpty(sp));

//push Element in stack
    push(sp, 30);
    push(sp, 32);
    push(sp, 34);
    push(sp, 36);
    push(sp, 38);
    push(sp, 40);
    push(sp, 42);
    push(sp, 44);
    push(sp, 46);
    push(sp, 48);
    push(sp, 50);
    push(sp, 52);


  printf("\nPoped Elemented in the Stack :\n%d\n", pop(sp));
  printf("\nPoped Elemented in the Stack :\n%d\n", pop(sp));
  printf("\nPoped Elemented in the Stack :\n%d\n", pop(sp));


  push(sp,56);

  for(int j=1; j<sp->top+1; j++) {
    printf("The value at index %d is %d\n", j,peek(sp,j));
  }
  

    return 0;
}


