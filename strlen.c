//Write a program to input a string and print its length using strlen()
#include<stdio.h>
#include<string.h>
int main()
{
    char akshu[20];
    printf("Enter a name:");
    scanf("%s",&akshu);
    int len=strlen(akshu);
    printf("Length of your name:%d",len);
  }
