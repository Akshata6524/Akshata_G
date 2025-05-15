//call by reference
#include<stdio.h>
int main()
{
    int A=5;
    int *B=&A;
    *B=*B+10;
    printf("A=%d\n",A);
    printf("*B=%d",*B);
}
