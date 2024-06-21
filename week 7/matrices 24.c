#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{
    int row,col;
    int x[size][size];
    int y[size][size];
    int z[size][size];
    printf("enter elements of first matrix");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&x[row][col]);
        }
    }
     printf("enter elements of second matrix");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&y[row][col]);
        }
    }
    z[row][col]=x[row][col]-y[row][col];
    printf("difference between two matrices is ");
     for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            printf("%d\n",z[row][col]);
        }
    }
}
