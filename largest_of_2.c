#include<stdio.h>
int main()
{
    int n1,n2;
    printf("enter the value of n1 and n2:");
    scanf("%d%d",&n1,&n2);
    if(n1>n2){
        printf("%d is the largest number",n1);
    }
    else
    printf("%d is the largest number",n2);
}
