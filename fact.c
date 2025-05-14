#include<stdio.h>
int main()
{
    int n,i;
    int fact=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    if(n==0){
        printf("1");
    }
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
        printf("%d",fact);
}

    
