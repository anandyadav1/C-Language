#include<stdio.h>
#include<stdlib.h>

    struct Node *front=NULL;   //globaly dicalaration
    struct Node *rear=NULL;

struct Node {
    int data;
    struct Node *next;
};

void LinkedlistTraversal(struct Node * ptr){
    while(ptr!=NULL){
        printf("Element :%d\n",ptr->data);
        ptr=ptr->next;
    }
}
void enqueue(int val){
    struct Node *n=(struct Node *)malloc(sizeof(struct Node));
    if(n==NULL){
        printf("Queue is Full :\n");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(front==NULL){
            front=rear=n;
        }
        else{
            rear->next=n;
            rear=n;
        }

    }
}

int denqueue(){
    int val=-1;
    struct Node *ptr=front;
    if(front==NULL){
        printf("Queue is Empty :\n");
    }
    else{
       front=front->next;
       val=ptr->data;
       free(ptr);

    }
    return val;
}

int main() {
     printf("dequeing element %d :\n",denqueue());
     printf("\n");

    enqueue(45);
    enqueue(41);
    enqueue(42);
    enqueue(43);
    enqueue(44);
    enqueue(46);
    enqueue(47);
    enqueue(48);
    LinkedlistTraversal(front);
    printf("\n");
     printf("dequeing element %d :\n",denqueue());
     printf("dequeing element %d :\n",denqueue());
     printf("dequeing element %d :\n",denqueue());
    printf("\n");
     
    LinkedlistTraversal(front);
    return 0;
}