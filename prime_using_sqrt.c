#include<stdio.h>
#include<math.h>
int main(){
    int n,i,is_prime=1;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n<=1){
        printf("Enter a number from 2");
    }
    int limit= sqrt(n);
    for(i=2;i<=limit/2;i++){
        if(limit%2==0){
            is_prime=0;
        }
    }
    if(is_prime==0){
        printf("Its is not a prime number ");
    }
    else
    {
        printf("Its is a prime number ");
        
    }
    
}
