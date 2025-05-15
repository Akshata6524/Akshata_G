//swapping numbers with call by value
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
      printf("Before swaping:\n a=%d \n b=%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
     printf("Before swaping:\n a=%d \n b=%d\n",a,b);
}
