// function may have more than 1 return type
#include<stdio.h>
int check_relation( int a, int b){
    if(a==b)
    return 0;
    if(a>b)
    return 1;
    if (a<b)
    return -1;
}
int main(){
    int a,b,result;
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    result=check_relation(a,b);
    if(result==0)
    printf("EQUAL\n");
    if(result==1)
    printf("a is gater than b");
    if(result==-1)
    printf("a is less than b");
    return 0;
}

