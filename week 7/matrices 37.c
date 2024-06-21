#include <stdio.h>
#include <stdlib.h>
#define size 2
int main()
{
    int row,col,f,s,d;
    int x[size][size];
    printf("enter elements of the matrix");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&x[row][col]);
        }
    }
    f=x[0][0]*x[1][1];
    s=x[0][1]*x[1][0];
    d=f-s;
    printf("determinant of the matrix is =%d",d);
    return 0;
}
