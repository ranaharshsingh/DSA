//insertion at between 
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
};
void showinsrtion(struct node * ptr){
    while( ptr != NULL){
        printf(" Element: %d\n",ptr ->data);
        ptr = ptr -> next; 
    }
}
struct node * insertion_end(struct node * head,int data){
    struct node * ptr= (struct node *)malloc (sizeof(struct node));
    ptr->data=data;
    struct node *p = head;
    while( p->next != NULL){
        p = p ->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * forth;
    struct node * fifth;

    head = ( struct node *) malloc (sizeof(struct node));
    second= ( struct node *) malloc (sizeof(struct node));
    third= ( struct node *) malloc (sizeof(struct node));
    forth = ( struct node *) malloc (sizeof(struct node));
    fifth = ( struct node *) malloc (sizeof(struct node));
   
    head ->data = 5;
    head ->next = second;

    second -> data = 10;
    second -> next = third;
    
    third -> data =14;
    third -> next = forth;
    
    forth -> data = 20;
    forth ->next = fifth;

    fifth -> data = 25;
    fifth -> next = NULL;
    
    printf("linked list before insertion\n");
    showinsrtion(head);
    //printf("\n");
    printf("linked list after insertion\n");
    head=insertion_end(head,56);
    showinsrtion(head);

    return 0;
}