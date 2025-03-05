// insert at end of linkedlist
#include<stdio.h>
#include<stdlib.h>
// creating structure for node
struct Node{
    int data;
    struct Node *next;
};
// traverse over with help of pointer
void traverse(struct Node * ptr){
    while(ptr!=NULL){
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * insertAtEnd(struct Node* head, int data, int index){
    struct Node * ptr = (struct Node*) malloc(sizeof(struct Node));
    struct Node * p = head;
    int i=0;
    while(ptr->next!= NULL){
        p = p->next;
    } 
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
int main(){
    // Allocate memory for nodes in heap
    struct Node * head = (struct Node*) malloc(sizeof(struct Node));
    struct  Node * second = (struct Node*) malloc(sizeof(struct Node));
    struct Node * third = (struct Node*) malloc(sizeof(struct Node));
    // alloting values
    head-> data = 7;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 34;
    third->next = NULL;
    
    // traverse
    traverse(head);
    head = insertAtIndex(head, 64,1);
    traverse(head);

    return 0;
}



