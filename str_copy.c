//Write a program to copy one string to another using strcpy().
#include<stdio.h>
#include<string.h>
int main(){
    char Ak[20];
    printf("Enter a name:");
    scanf("%s",&Ak);
    printf("your name:%s\n",Ak);
    strcpy(Ak,"Akshata");
    printf("your copied name:%s\n",Ak);
}
