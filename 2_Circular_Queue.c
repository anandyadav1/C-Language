#include<stdio.h>
#include<stdlib.h>

struct Circularqueue {
    int size;
    int r;
    int f;
    int *arry;
};

int isEmpty(struct Circularqueue *q){
    if(q->r==q->f){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct Circularqueue *q){
    if((q->r+1)%q->size== q->f){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct Circularqueue *q, int val){
    if(isFull(q)){
        printf("This Circularqueue is full :\n");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arry[q->r]=val;
        printf("Enqueued Element is %d :\n",val);
    }
}

int dequeue(struct Circularqueue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("This Circularqueue is Empty :\n");
    }
    else{
        q->f=(q->f+1)%q->size;
        a=q->arry[q->f];
    }
    return a;
}


int main() {

    
    struct Circularqueue q;
    q.size=5;
    q.r=q.f=0;
    q.arry=(int *)malloc(q.size *sizeof(int));
    
    enqueue(&q, 20);
    enqueue(&q, 22);
    enqueue(&q, 24);
    enqueue(&q, 26);
    enqueue(&q, 28);
    printf("\n");
    printf("dequeue Element is %d :\n",dequeue(&q));
    printf("dequeue Element is %d :\n",dequeue(&q));
    printf("dequeue Element is %d :\n",dequeue(&q));
    printf("dequeue Element is %d :\n",dequeue(&q));
    printf("dequeue Element is %d :\n",dequeue(&q));
    printf("\n");
    enqueue(&q, 30);
    printf("\n");

    //isEmpty(&q);
    //isFull(&q);

    // if(isEmpty(&q)){
    //     printf("Queue is Empty :\n");
    // }
    // if(isFull(&q)){
    //     printf("Queue is Full :\n");
    // }
    
    return 0;
}