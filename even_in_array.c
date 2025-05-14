#include<stdio.h>
int i;
int akshu( int a[],int n){
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }printf("Even numbers are in array:");
    for(i=0;i<n;i++){
    if(a[i]%2==0){
        printf("%2d",a[i]);
    }
}
return a[i];
}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    akshu(a,n);
}
