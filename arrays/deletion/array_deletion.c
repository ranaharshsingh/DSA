#include<stdio.h>
int main(){
    int n,idx=3;
    printf("ENTER THE NUMBER");
    scanf("%d",&n);
    printf("taking input!");
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=idx;i<n-1;i++){
      arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}