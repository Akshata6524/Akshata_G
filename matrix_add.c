#include<stdio.h>
int main()
{
    int row,col,i,j;
    printf("Enter the row and col:");
    scanf("%d%d",&row,&col);
    int a[row][col],b[row][col],c[row][col];
    printf("The matrix A:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
     printf("The matrix B:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&b[i][j]);
        }
    }
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                c[i][j]=a[i][j]+b[i][j];
                }
    }
     printf("The Resultant matrix c:\n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf(" %d",c[i][j]);
        }
    } 
    printf("\n");
}
