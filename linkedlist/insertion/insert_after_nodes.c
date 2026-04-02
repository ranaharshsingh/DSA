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

struct node *  print_insertion(struct node * head,struct node * previousnode,int data){
    struct node * ptr= ( struct node * )malloc (sizeof (struct node)) ;
    ptr ->data = data;
    
    ptr->next = previousnode->next;
    previousnode->next=ptr;
    
    return head;

}

int main(){
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