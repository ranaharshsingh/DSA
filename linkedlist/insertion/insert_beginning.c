// insertion at the begenning ; O(1)  :- this has been shown;
// insertion at betwween;  O(n)
// insertion at the end;   O(n)
// insertion after a node ; O(1)
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;

};
void linklist_traversal(struct node * ptr){
    while(ptr != NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr -> next;
    }
}

struct node * insertnodebegin( struct node * head, int data){
    struct node * ptr =( struct node *)malloc(sizeof(struct node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;

    // allocate memory for nodes in the linke list in heap;
    head = (struct node *) malloc (sizeof(struct node));
    second = (struct node *) malloc (sizeof(struct node));
    third = (struct node *) malloc (sizeof(struct node));

    // link the first and second node;
    head -> data = 7;
    head -> next = second;
    // link the second node and the third node;
    second -> data =11;
    second -> next = third;
    // terminate the list at the third node;
    third -> data = 77;
    third -> next = NULL;

    linklist_traversal(head);
    head = insertnodebegin(head,56);
    printf("\nelement after insertion\n");
    linklist_traversal(head);
    return 0;
}