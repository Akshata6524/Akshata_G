//by using user input adding 2 numbers
#include <stdio.h>
int sum(int a,int b){
int result=a+b;
    return result;
}
int main(){
    int a,b,total;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    total=sum(a,b);
    printf("Total=%d",total);
    return 0;
}
