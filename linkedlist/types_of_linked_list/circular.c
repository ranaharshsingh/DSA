#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};
void linkedlisttraverse(struct node * head){
    struct node * p= head;
    do{
        printf(" Element is %d\n", p->data);
        p = p->next;
    }while(p!=head);

}

struct node * insert_cir(struct node * head,int data){
    struct node * ptr = ( struct node *)malloc(sizeof(struct node));
    struct node * p = head -> next;
    ptr -> data = data;

    while(p->next != head){
        p = p ->next;
    }
    p-> next = ptr;
    ptr->next=head;
    head = ptr;
    return head;
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * forth;

    head= ( struct node *)malloc(sizeof(struct node));
    second= ( struct node *)malloc(sizeof(struct node));
    third=  ( struct node *)malloc(sizeof(struct node));
    forth=  ( struct node *)malloc(sizeof(struct node));
 
    head ->data=1;
    head ->next = second;

    second->data=3;
    second ->next = third;

    third ->data=4;
    third ->next = forth;

    forth ->data= 5;
    forth ->next = head;
    
    linkedlisttraverse(head);
    head = insert_cir(head,9);
    linkedlisttraverse(head);
    return 0;
}