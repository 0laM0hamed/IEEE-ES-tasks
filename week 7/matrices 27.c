#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{
     int row,col,equal;
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
     for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {

    if (x[row][col]==y[row][col])
    {
       equal=1;
    }
    else
    {
        equal=0;
    }
        }
    }
    if (equal==1)
    {
        printf("matrices are equal");

    }
    else
    {
         printf("matrices are not equal");
    }
    return 0;
}
