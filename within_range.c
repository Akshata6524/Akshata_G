#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    if(10<=num&&num<=100){
        printf("%d within the range of 10 to 100",num);
    }else
    printf("out of range");
}
