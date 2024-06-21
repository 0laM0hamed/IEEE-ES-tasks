#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{
    int row,col,symmetric;
    int x[size][size];
    int y[size][size];
    printf("enter elements of the matrix");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&x[row][col]);
        }
    }
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            y[col][row]=x[row][col];
        }
    }
     for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
    if (x[row][col]==y[row][col])
    {
        symmetric=1;
    }
    else
    {
        symmetric=0;
    }
        }
    }
    if(symmetric==1)
    {
        printf("matrix is symmetric");
    }
    else
    {
        printf("matrix is not symmetric");
    }
    return 0;
}
