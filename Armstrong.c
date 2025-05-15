#include<stdio.h>
int main()
{
    int num,original,reminder,result=0;
    printf("Enter the value of num:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        reminder=num%10;
        result=result+reminder*reminder*reminder;
        num=num/10;
    }
    if(original==result){
        printf("The number is Armstrong number");
    }else
     printf("The number is not Armstrong number");
}
