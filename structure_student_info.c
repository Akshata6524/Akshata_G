#include<stdio.h>
struct student{
    char name[50];
    char usn[50];
    int i1,i2,i3;
    float avg;
};
int main(){
    int n,i;
    struct student s[20];
    printf("Enter the number of students(n):");
    scanf("%d",&n);
    printf("Enter the information of student\n");
    for(i=1;i<=n;i++){
        printf("Enter the details of student %d :\n",i);
        printf("Enter name:");
        scanf("%s",&s[i].name);
        printf("Enter USN:");
        scanf("%s",&s[i].usn);
        printf("Enter the internal marks:");
        scanf("%d%d%d",&s[i].i1,&s[i].i2,&s[i].i3);
        }
        for(i=1;i<=n;i++){
            s[i].avg=(s[i].i1+s[i].i2+s[i].i3)/3.0;
        }
        printf("List of student who got average\n");
        printf("\n Name \t USN \t Average\n");
        for(i=1;i<=n;i++)
        if(s[i].avg>=20.0){
            printf("\n %s\t %s \t%f",s[i].name,s[i].usn,s[i].avg);
        }
         printf("List of student who not got average\n");
        printf("\n Name \t USN \t Average\n");
        for(i=1;i<=n;i++)
        if(s[i].avg<=20.0){
            printf("\n %s\t %s \t%f",s[i].name,s[i].usn,s[i].avg);
        }
}
