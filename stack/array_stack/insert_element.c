#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

// check if stack is full
int isFull(struct stack *sp){
    if(sp->top == sp->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(struct stack *sp){
    if(sp->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
//push operation
void push(struct stack *sp,int val){
    if(isFull(sp)){
        printf("stack overflow ! cannot push %d\n",val);
    }else{
        sp->top++;
        sp->arr[sp->top]=val;
        printf("pushed %d\n",val);
    }
}

//pop operation

int pop(struct stack *sp){
    if(isEmpty(sp)){
        printf("stack underflow! cannot pop\n");
        return -1;
    }else{
        int val =
        sp->arr[sp->top];
        sp->top--;
        return val;
    }
}

void display(struct stack * ptr){
    for(int i=0;i<=ptr->top;i++){
        printf(" %d",ptr->arr[i]);
    }
    printf("\n");
}

int main(){
    struct stack *sp;
    sp = (struct stack *)malloc(sizeof(struct stack));

    sp->size=8;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size *sizeof(int));

    push(sp,9);
    push(sp,7);
    push(sp,15);
    push(sp,11);
    
    display(sp);
    printf("popped element %d\n",pop(sp));
    printf("popped element %d\n",pop(sp));
    display(sp);
    return 0;
}