#include <stdio.h>
int main()
{
    int n,n1=0,n2=1,next_term,i;
    printf("enter a number:");
    scanf("%d",&n);
    printf(" fibonacii_sequence:%d,%d",n1,n2);
    for(i=3;i<=n;i++){
        next_term=n1+n2;
        printf(" %d",next_term);
        n1=n2;
        n2=next_term;
       
    }
}
