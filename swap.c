#include<stdio.h>
int main()
{
    int num_1,num_2,temp;
    printf("enter the value of num_1 :");
    scanf("%d",&num_1);
    printf("enter the value of  num_2:");
    scanf("%d",&num_2);
    temp=num_1;
    num_1=num_2;
    num_2=temp;
    printf("after swapping:\nnum_1 = %d\nnum_2 = %d ",num_1,num_2);
    
}
