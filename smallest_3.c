#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter the value of n1:");
    scanf("%d",&n1);
    printf("Enter the value of n2:");
    scanf("%d",&n2);
    printf("Enter the value of n3:");
    scanf("%d",&n3);
    if(n1<n2&&n1<n3){
        printf("%d is the smallest of three number",n1);
    }else if(n2<n1&&n2<n3){
        printf("%d is the smallest of three number",n2);
    }
    else
    printf("%d is the smallest of three number",n3);
}
