//Define a structure named Student with members: name, roll, and marks. Write a program
to read and display student details.
#include<stdio.h>
struct Student{
    char name[50];
    int roll;
    float marks;
};
int main(){
    struct Student s1;
    printf("Enter name:");
    scanf("%s",&s1.name);
     printf("Enter roll number:");
    scanf("%d",&s1.roll);
     printf("Enter marks:");
    scanf("%f",&s1.marks);
    printf("\nStudent Details:\n");
    printf("Name:%s\n Roll number:%d\n Marks%2f\n",s1.name,s1.roll,s1.marks);
}
