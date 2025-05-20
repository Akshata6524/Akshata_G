#include<stdio.h>
#include<math.h>
void main(){
    int a,b,c;
    float root1,root2,realp,imgp,disc;
    printf("Enter the value of a ,b and c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a==0||b==0||c==0){
        printf("Roots can't be found");
        return;
    }
    disc=b*b-4*a*c;
    if(disc==0){
        printf("Roots are equal\n");
        root1=root2=-b/(2*a);
        printf("root1=root2=%f",root1);
    }
    else if(disc>0){
        printf("Roots are real and distinct\n");
        root1=(-b+sqrt(disc))/(2*a);
        root2=(-b-sqrt(disc))/(2*a);
        printf("root1=%f\n",root1);
        printf("root2=%f\n",root2);
    }
    else if(disc<0){
        printf("roots are imaginary\n");
        realp=-b/(2*a);
        imgp=sqrt(fabs(disc))/(2*a);
        printf("root1=%f + i%f\n",realp,imgp);
        printf("root2=%f - i%f\n",realp,imgp);
    }
}
