// WAP in c to insert an element in array at a particular index;

#include<stdio.h>
int main(){
    int i,n,value,idx;
    printf("enter the number");
    scanf("%d",&n);
    int arr[n];
    printf("taking input:-");
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter the inserting element");
    scanf("%d",&value);
    printf("enter the inserting index!");
    scanf("%d",&idx);

    for( i=n;i>idx;i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=value;
    n++;

    for( i=0;i<n;i++){
        printf("%5d",arr[i]);
    }
    // pop operation
    for( i=idx;i<n;i++){
        arr[i]=arr[i+1];
    }
    n--;
    printf("now poping the inserting element\n");
    printf("popiing the element \n");
    for( i=0;i<n;i++){
        printf("%5d",arr[i]);
    }

}