#include<stdio.h>
int num;
int akshu(int n1,int n2,int n3){
    if(n1>n2&&n1>n3){
        printf("%d is the largest number",n1);
    }
    else if(n2>n1&&n2>n3){
        printf("%d is the largest number",n2);
    }
    else{
        printf("%d is the largest number",n3);
    }
    return num;
}
int main(){
     num=akshu(10,2,8);
    
}
