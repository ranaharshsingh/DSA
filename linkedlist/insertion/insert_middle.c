#include<stdio.h>
#include<stdlib.h>
 
struct node {
    int data;
    struct node * next;
};

void showinsertion(struct node * ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr=ptr->next;
    
    }
}
struct node * insertion_btw(struct node * head,int data,int index){
    struct node * ptr= (struct node *)malloc (sizeof(struct node));
    struct node * p = head;
    ptr->data=data;
    int i=0;
    while( i!= index-1){
        p=p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;
    return head;   
}
int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * forth;

    head = (struct node *)malloc( sizeof(struct node));
    second = (struct node *)malloc( sizeof(struct node));
    third = (struct node *)malloc( sizeof(struct node));
    forth= (struct node *)malloc( sizeof(struct node));

    head -> data =5;
    head ->next=second;

    second -> data = 10;
    second ->next =third;

    third -> data =20;
    third -> next = forth;

    forth->data =25;
    forth -> next =NULL;
    
    printf("original element before insertion\n");
    showinsertion(head);
    head = insertion_btw(head,15,2);
    printf("element after insertion\n");
    showinsertion(head);
    return 0;

}