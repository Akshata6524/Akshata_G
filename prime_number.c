#include<stdio.h>
int main(){
    int i,n,is_prime=1;     //is_prime=1-->it means True
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=1){
        printf("Enter a number from 2");
    }
    for(i=2;i<=n/2;i++){
        if(n%2==0){
            is_prime=0;         //it_prime=0-->it means False
        }
    }
    if(is_prime==0){
        printf("It is not a prime number");
    }
    else
    {
        printf("It is a prime number");
    }
}
