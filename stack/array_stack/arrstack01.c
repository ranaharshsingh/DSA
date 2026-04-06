#include<stdio.h>
#include<stdlib.h>

struct stack {
    int size;
    int top;
    int *arr;
};


int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }else{
        return 0;
    }
}


void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("overflow! cannot push %d\n",val);
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("pushed element in the arr %d\n",val);
    }
}

int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }else{
        return 0;
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("underflow! poped element:");
        return -1;
    }else{
        int val= ptr->arr[ptr->top];
        ptr->top--;
        return val;
        
    }
}

int main(){
    struct stack *ptr = (struct stack *)malloc(sizeof(struct stack));
    ptr->size=6;
    ptr->top=-1;
    ptr->arr=(int *)malloc(ptr->size * sizeof(int));
    
    push(ptr,8);
    push(ptr,5);
    push(ptr,3);
    push(ptr,2);
    push(ptr,9);
    push(ptr,12);
    for(int i=0;i<=ptr->top;i++){
        printf("%d",ptr->arr[i]);

    }
    printf("\n");
    printf("popped element is %d\n",pop(ptr));
    printf("popped element is %d\n",pop(ptr));
    printf("popped element is %d\n",pop(ptr));


   return 0;
}