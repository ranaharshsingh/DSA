#include<stdio.h>
#include<stdlib.h>

struct stack{
   int size;
   int top;
   int *arr;
};

int isEmpty(struct stack *ptr){
    if(ptr->top== -1){

        return 1;
    }else{
        return 0;

    }
}

int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;

    }else{

        return 0;
    }
}

void push(struct stack *ptr,int val){
    if(isFull(ptr)){
        printf("overflow ! cannot push new element \n");
    }else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
        printf("pushed element %d\n",val);
    }
}

int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("underflow ! cannot pop element");
        return -1;
    }else{
        int val=ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr,int i){
    int arrInd=ptr->top-i;
    if(arrInd<0){
        printf("not a valid position for the stack\n");
        return -1;
    }else{
        return ptr->arr[arrInd];
    }
}

int main(){
    struct stack *ptr;
    ptr=(struct stack *)malloc (sizeof(struct stack));
    ptr->size=9;
    ptr->top=-1;
    ptr->arr=( int *)malloc (ptr->size*sizeof(int));

    push(ptr,4);
    push(ptr,6);
    push(ptr,9);
    push(ptr,5);
    push(ptr,94);
    push(ptr,89);

    //printf("poped element is %d\n",pop(ptr));
    for(int j=0;j<ptr->top-1;j++){
        printf("the value at index %d is %d \n",j,peek(ptr,j));
        
    }
    return 0;

}