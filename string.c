//string name,length,copy,compare,cancatination
#include<stdio.h>
#include<string.h>
int main(){
    char shiv[100];
    printf("Enter your name:");
    scanf("%s",&shiv);
    printf("%s\n",shiv);
    int length=strlen(shiv);
    printf("Length of your name:%d\n",length);
    strcpy(shiv,"Akshu");
    printf("copied as:%s\n",shiv);
    int campare=strcmp("Akshata","Anusha"); //L>0=-1 and 0 and 0<R=1
    printf("comparision is:%d\n",campare);
    strcat(shiv," Nagaloti");
    printf("%s",shiv);
}
