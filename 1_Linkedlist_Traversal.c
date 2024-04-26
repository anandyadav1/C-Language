#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node * next ;
};

void LinkedlistTraversal( struct Node * ptr) {
    while(ptr->next != NULL) {
        printf("Element= %d \n" ,ptr->data);
        ptr=ptr->next ;
    }
}
 int main() {
    // struct Node * head ;
    // struct Node * second ;
    // struct Node * third ;
    // struct Node * fourth ;

    // struct Node * head ,* second ,* third ,* fourth ;

    //Allocation memory for Nodes in the Linkedlist
   struct Node * head = (struct Node *)malloc(sizeof(struct Node));
   struct Node * second = (struct Node *)malloc(sizeof(struct Node));
   struct Node * third = (struct Node *)malloc(sizeof(struct Node));
   struct Node * fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link first and second Nodes
    head->data=2;
    head->next=second;

    // Link second and third Nodes
    second->data=3;
    second->next=third;

    // Link third and fourth Nodes
    third->data=4;
    third->next=fourth;

    // Terminate thelist at the third Nodes
    fourth->data=5;
    fourth->next=NULL;
     LinkedlistTraversal(head);
    return 0;
 }
