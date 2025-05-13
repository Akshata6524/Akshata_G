#include<stdio.h>
int main()
{
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);
    if(n%3==0&&n%5==0){
        printf("%d is divisible by both 3 and 5",n);
    }
    else 
    printf("%d is not divisible by both 3 and 5",n);
    return 0;
}
