#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

int isEmpty(struct node *top){
    if(top==NULL){
        return 1;
    }else{
        return 0;
    }
} 

int isFull(struct node * top){
    struct node*p = (struct node *)malloc (sizeof(struct node));
    if(p==NULL)
        return 1;
    free(p);
        return 0;
    
}

struct node * push(struct node *top,int x){
    if(isFull(top)){
       printf("stack overflow\n");
    }else{
        struct node * n = (struct node *)malloc (sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
    }
}

int pop(struct node ** top){
    if(isEmpty(*top)){
        printf("underflow !");
        return -1;
    }else{
        struct node * n= *top;
        *top= n->next;
        int x =n->data;
        free(n);
        return x;
    }
}

void linkedListTraversal(struct node * ptr){
    while(ptr != NULL){
        printf("element %d\n ", ptr->data);
        ptr=ptr->next;
    }
}
int main(){
    struct node * top=NULL;
    top=push(top,78);
    top=push(top,7);
    top=push(top,8);
    top=push(top,6);
    int element = pop(&top);
    printf("popped element is %d\n",element);
    linkedListTraversal(top);
    return 0;
}