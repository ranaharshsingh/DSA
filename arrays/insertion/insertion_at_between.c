#include<stdio.h>
void insertele(int arr[],int n,int idx,int element){
    for(int i=n;i>=idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]==element;
    n++;

}

void print(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[]={1,2,3,4,5};
    int element=8;
    int idx=3;
    int size=sizeof(arr);
    printf("orignal array\n");
    print(arr,size);
    
    insertele(arr,size,idx,element);
    printf("inserted array\n");
    print(arr,size);
    return 0;
}