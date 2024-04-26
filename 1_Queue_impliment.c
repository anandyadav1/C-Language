#include<stdio.h>
#include<stdlib.h>

struct queue {
    int size;
    int r;
    int f;
    int *arry;
};

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    else{
        return 0;
    }
}
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This queue is full :\n");
    }
    else{
        q->r++;
        q->arry[q->r]=val;
        printf("Enqueued Element is %d :\n",val);
    }
}

int dequeue(struct queue *q){
    int a=-1;
    if(isEmpty(q)){
        printf("This queue is Empty :\n");
    }
    else{
        q->f++;
        a=q->arry[q->f];
    }
    return a;
}


int main() {

    struct queue *q;
    q->size=100;
    q->arry=q->f=-1;
    q->arry=(int *)malloc(q->size *sizeof(int));
    
    enqueue(q, 20);
    enqueue(q, 22);
    enqueue(q, 24);
    printf("\n");

    printf("Dequeue Element is %d :\n",dequeue(q));
    printf("Dequeue Element is %d :\n",dequeue(q));
    printf("Dequeue Element is %d :\n",dequeue(q));

    if(isEmpty(q)){
        printf("Queue is Empty :\n");
    }
    if(isFull(q)){
        printf("Queue is Full :\n");
    }

   /* struct queue q;
    q.size=3;
    q.r=q.f=-1;
    q.arry=(int *)malloc(q.size *sizeof(int));
    
    enqueue(&q, 20);
    enqueue(&q, 22);
    enqueue(&q, 24);
    printf("dequeue Element is %d :\n",dequeue(&q));
    printf("dequeue Element is %d :\n",dequeue(&q));
    printf("dequeue Element is %d :\n",dequeue(&q));

    if(isEmpty(&q)){
        printf("Queue is Empty :\n");
    }
    if(isFull(&q)){
        printf("Queue is Full :\n");
    }
    */
    return 0;
}