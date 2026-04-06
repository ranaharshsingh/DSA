#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;
};

int isFull(struct stack *sp){
    if(sp->top == sp->size -1){
        return 1;
    }else{
        return 0;
    }
}

int isEmpty(struct stack *sp){
    if(sp->top == -1){
        return 1;
    }else{
        return -1;
    }
}

void push (struct stack *sp , int val){
    if(isFull(sp)){
        printf("overflow! cannot push %d\n",val);
    }else{
        sp->top++;
        sp->arr[sp->size]=val;
        printf("pushed %d\n",val);
    }
}

int peek(struct stack *ptr,int i){
    int arrInd=ptr->top=1;
    if(arrInd<0){
        printf(" this is out of stack indexing:");
        return -1;
    }else{
        return ptr->arr[arrInd];
    }
}

int main(){
    struct stack *sp;
    sp=(struct stack *)malloc(sizeof(struct stack));
    sp->size=8;
    sp->top=-1;
    sp->arr=(int *)malloc(sp->size*sizeof(int));

    push(sp,6);
    push(sp,3);
    peek(sp,5);

    push(sp,3);
    for(int j=0;j<sp->top-1;j++){
        printf("the value at index %d is %d\n",j,peek(sp,j));
    }
    return 0;
}