#include<stdio.h>
int main(){
    int num,reminder,reversed=0,original;
    printf("Enter the value of num:");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        reminder=num%10;
        reversed=reversed*10+reminder;
        num=num/10;
    }
    if(original==reversed){
        printf("The number is palindrom");
    }
    else{
         printf("The number not is palindrom");
    }
}
