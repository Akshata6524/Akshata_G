#include<stdio.h>
int i,c,fact=1;
int akshu(int n){
    if(n==0){
        printf("1");
    }
    else if(n<0){
        printf("enter the positive number");
    }
    else{
        for(i=1;i<=n;i++){
            fact=fact*i;
        }
        printf("%d",fact);
    }
    return fact;
}
int main(){
    c=akshu(0);
}
