// Write a program to declare an integer variable and a pointer, then display the address and value using the pointer.
#include<stdio.h>
int main(){
    int A=8;
    int *ptr=&A;
    printf("value of A:%d",*ptr);
    printf("address of A:%d",ptr);
 }
