#include<stdio.h>
int main(){
    int i,j,k,m,n,p,q,A[5][5],B[5][5],C[5][5];
    printf("Enter the order of matrix A:");
    scanf("%d%d",&m,&n);
    printf("Enter the order of matrix B:");
    scanf("%d%d",&p,&q);
    if(n!=p){
        printf("Matrix Multiplication is not possible");
        return 0;
    }
    else{
        printf("Matrix multiplication is possible\n");
        printf("Enter the elements of matrix A:\n");
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        scanf("%d",&A[i][j]);
        printf("Enter the elements of matrix B:\n");
        for(i=0;i<p;i++)
        for(j=0;j<q;j++)
        scanf("%d",&B[i][j]);
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                C[i][j]=0;
                for(k=0;k<n;k++)
                    C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
        printf("The matrix A is:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%6d",A[i][j]);
            }
            printf("\n");
        }
         printf("The matrix B is:\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("%6d",B[i][j]);
            }
            printf("\n");
        }
        printf("The product matrix C is:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                printf("%6d",C[i][j]);
            }
            printf("\n");
        }
        }
    }
