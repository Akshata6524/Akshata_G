//dereference concept
#include<stdio.h>
int main(){
    int A=5;
    int *ptr=&A;
    printf("value of A:%d\n",A);
    *ptr=10;
    printf("New value of A:%d",A);
    
}
