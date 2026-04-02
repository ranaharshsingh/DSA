//linked list implementaion and insertion at all places; 
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
void show_insertion(struct node * ptr){
    while(ptr != NULL){
        printf("Element: %d\n",ptr->data);
        ptr = ptr->next;
    }
}
// insertion at begining;
struct node * insertnodebegin( struct node * head, int data){
    struct node * ptr =( struct node *)malloc(sizeof(struct node));
    ptr -> next = head;
    ptr -> data = data;
    return ptr;
}
// insertion at between;
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
// insertion at end ;
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
//insertion after node ;
struct node *  print_insertion(struct node * head,struct node * previousnode,int data){
    struct node * ptr= ( struct node * )malloc (sizeof (struct node)) ;
    ptr ->data = data;
    
    ptr->next = previousnode->next;
    previousnode->next=ptr;
    
    return head;

}int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * forth;

    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    forth=(struct node *)malloc(sizeof(struct node));

    head -> data = 5;
    head ->next = second;

    second ->data= 10;
    second ->next = third;

    third ->data = 15;
    third ->next = forth;

    forth-> data= 20;
    forth -> next = NULL;

    printf("before inserting the element");
    show_insertion(head);
    head = print_insertion( head, second,45);
    printf("after inserting a node");
    show_insertion(head);
    return 0;
}