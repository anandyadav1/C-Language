#include<stdio.h>
#include<malloc.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
    };


struct Node *CreateNode(int data ){
    struct Node *n;   //creating a Node pointer 
    n=(struct Node *)malloc(sizeof(struct Node));  //Alocating the heep memory
    n->data=data;      //Setting the data
    n->left=NULL;   //Setting the left and right children to NUUL
    n->right=NULL;  //Setting the left and right children to NUUL
    return n;      //finaly returning created Node
}

void preeOrder(struct Node *root ) {
    if(root!=NULL){
        printf("%d ",root->data);
        preeOrder(root->left);
        preeOrder(root->right);

    }
}

int main() {
    /*
    struct Node *p;
    p=(struct Node *)malloc(sizeof(struct Node));
    p->left=NULL;
    p->right=NULL;

    //constructing the first Node
    struct Node *p1;
    p=(struct Node *)malloc(sizeof(struct Node));
    p->left=NULL;
    p->right=NULL;

    //constructing the Second Node
    struct Node *p2;
    p=(struct Node *)malloc(sizeof(struct Node));
    p->left=NULL;
    p->right=NULL;

    //constructing the third Node
    struct Node *p3;
    p=(struct Node *)malloc(sizeof(struct Node));
    p->left=NULL;
    p->right=NULL;

    //Linking the root Node with left and right children
    p->left=p1;
    p->right=p2;
    */

    //Constructing the root Node : Using function (Recomonded)
    struct Node *p=CreateNode(2);
    struct Node *p1=CreateNode(1);
    struct Node *p2=CreateNode(4);
    struct Node *p3=CreateNode(6);
    struct Node *p4=CreateNode(7);
    struct Node *p5=CreateNode(8);
    struct Node *p6=CreateNode(9);

    //Constructing the root Node with left and eight children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->left=p4;
    p2->left=p5;
    p2->right=p6;
     
     printf("These Element are Preorder in the tree :\n");
    preeOrder(p);

    return 0;
}