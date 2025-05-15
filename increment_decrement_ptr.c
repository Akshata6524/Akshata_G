//pointer increment and decrement
#include<stdio.h>
int main(){
    int A[]={11,12,13,14,15};
    int *ptr=A;
    printf("%d\n",*ptr);
    *ptr++;
    printf("%d\n",*ptr);
    *ptr++;
     printf("%d\n",*ptr);
     *ptr--;
      printf("%d\n",*ptr);
    
}
