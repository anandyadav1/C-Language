#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next;
};

void TraversalCircularLinkedlist(struct Node * head) {
    struct Node *ptr=head;
    int i=1;
    do{ printf("Node%d_Element=%d\n",i,ptr->data);   
        ptr=ptr->next;
    }while(ptr!=head);

    //or

    // int i=1;
    // while(ptr->next!=head){
    //     printf("Node%d_Element=%d\n",i,ptr->data);
    //     ptr=ptr->next;
    //     i++;
    // }
    // printf("Node%d_Element=%d\n",i,ptr->data);

}

int main() {

   struct Node * head = (struct Node *)malloc(sizeof(struct Node));
   struct Node * second = (struct Node *)malloc(sizeof(struct Node));
   struct Node * third = (struct Node *)malloc(sizeof(struct Node));
   struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));
   struct Node * five = (struct Node *)malloc(sizeof(struct Node));

   // Link first and second Nodes
    head->data=20;
    head->next=second;

    // Link second and third Nodes
    second->data=30;
    second->next=third;

    // Link third and fourth Nodes
    third->data=40;
    third->next=fourth;

    //Link fourth and five Nodes
    fourth->data=50;
    fourth->next=five;

    // Terminate thelist at the third Nodes
    five->data=60;
    five->next=head;

   //For print Circular Linkedlist
   printf("\nTraversal Circular Linkedlist :\n");
   TraversalCircularLinkedlist(head);


    return 0;
}