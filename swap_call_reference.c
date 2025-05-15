//swapping numbers with call by reference
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    int *p1=&a;
    int *p2=&b;
    printf("Before swaping:\n a=%d \n b=%d\n",a,b);
    temp=*p1;
    *p1=*p2;
    *p2=temp;
     printf("Before swaping:\n a=%d \n b=%d\n",a,b);
}
