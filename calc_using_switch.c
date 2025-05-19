//simple calculator using switch
#include<stdio.h>
int main(){
    int a,b,c,ch;
    while(1){
    printf("Enter the value of a and b:");
    scanf("%d%d",&a,&b);
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n");
    printf("Enter your choice:");
    scanf("%d",&ch);
    switch(ch){
            case 1: c=a+b;
            printf("Result = %d\n",c);
            break;
            case 2: c=a-b;
             printf("Result = %d\n",c);
            break;
            case 3:c=a*b;
             printf("Result = %d\n",c);
            break;
            case 4:
            if(b==0){
                printf("Division is not possible");
                return 0;
            }
            else {
                c=a/b;
                 printf("Result = %d\n",c);
            break;
            }
            case 5:
            _Exit(0);
            break;
            default : printf("Enter the values between 1 to 5\n");
            break;
    }
    }
}
            
            
            
        
    
