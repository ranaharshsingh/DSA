#include<stdio.h>
int main(){
    int i,n,value,idx;
    printf("enter the no of n");
    scanf("%d",&n);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("PRINTING THE ORIGINAL ARRAY\n");
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("\nENTER THE VALUE!\n");
    scanf("%d",&value);
    printf("ENTER THE INDEX WERE INERTING");
    scanf(" %d",&idx);
    printf(" inserted array\n");
    for(int i=n;i>idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=value;
    n++;

    for(i=0;i<n;i++){
        printf(" %d",arr[i]);
    }
}