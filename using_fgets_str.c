//Write a program to input a full name using fgets() and display it 
 #include<stdio.h>
 #include<string.h>
 int main(){
     char a[20];
     printf("Enter a name:");
     fgets(a,20,stdin);
     printf("%s",a);
 }
