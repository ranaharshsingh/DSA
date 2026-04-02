//deletion of linkedlist;
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void show_deletion(struct node * ptr){
    while( ptr != NULL){
        printf("Element: %d\n",ptr->data);
        ptr =ptr ->next;
    }
}
struct node * print_node(struct node * head , int index){
    struct node * p = head;
    while(p!= index-1){
        p= p->next;
    }
    struct node * ptr = p ->next;
    p->next = ptr ->next;
    free(ptr);
    return head;
}



int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * forth;
    struct node * fifth;
    head=(struct node *)malloc(sizeof(struct node));
    second=(struct node *)malloc(sizeof(struct node));
    third=(struct node *)malloc(sizeof(struct node));
    forth=(struct node *)malloc(sizeof(struct node));
    fifth= (struct node *)malloc(sizeof(struct node));
    head ->data=5;
    head ->next =second;

    second ->data=10;
    second ->next=third;

    third->data=15;
    third->next=forth;

    forth ->data=20;
    forth ->next=fifth;
    
    fifth ->data=25;
    fifth ->next =NULL;
    show_deletion(head);
    head = print_node(head , 3);
    printf( " \nafter deletion\n");
    show_deletion(head);
    return 0;
}