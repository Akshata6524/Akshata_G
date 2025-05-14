#include<stdio.h>
int main()
{
    int i,sum=0;
    int arr[10];
    printf("The numbers are:");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
        sum=sum+i;
    }
    printf("sum is:%d",sum);
}
    
