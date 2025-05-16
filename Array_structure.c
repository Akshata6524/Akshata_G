#include<stdio.h>
struct Employee{
    char name[50];
    int id;
    float salary;
};
int main(){
    struct Employee akshu[2];
    int i;
    for(i=0;i<2;i++){
        printf("Enter details for Employee :%d\n",i+1);
        printf("Name:");
        scanf("%s",akshu[i].name);
        printf("ID:");
        scanf("%d",&akshu[i].id);
        printf("Salary:");
        scanf("%f",&akshu[i].salary);
        }
        printf("\nEmployee Details:\n");
        printf("=====================\n");
        for(i=0;i<2;i++){
           printf("Name: %s      ID: %d       Salary: %.2f\n", akshu[i].name, akshu[i].id,
akshu[i].salary);
        }
}
