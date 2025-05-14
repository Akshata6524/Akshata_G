#include<stdio.h>
int main()
{
    int n,sum=0,i;
    int a[n];
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[n]);
        sum=sum+a[n];
    }
    printf("sum = %d",sum);
}
