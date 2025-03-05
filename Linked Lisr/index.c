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

    return 0;
}



