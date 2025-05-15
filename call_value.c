/call by value     //it do not appect to A value
#include<stdio.h>
int main()
{
    int A=5;
    int B=A;
    B=B+10;
    printf("A=%d\n",A);
    printf("B=%d",B);
}
