#include<stdio.h>
int main()
{
    int a[3][4]={{1,2,3,4},{5,6,7,8},{1,2,3,4}
};
int row,col;
for(row=0;row<3;row++){
    for(col=0;col<4;col++){
        printf("%d\n",a[row][col]);
    }
}
}
