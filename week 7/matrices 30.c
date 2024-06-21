#include <stdio.h>
#include <stdlib.h>
#define size 3
int main()
{
     int row,col,sum;
    int x[size][size];
    printf("enter elements of the matrix");
    for(row=0;row<size;row++)
    {
        for(col=0;col<size;col++)
        {
            scanf("%d",&x[row][col]);
        }
    }
    for (row=0;row<size;row++)
    {
        sum=0;
        for (col=0;col<size;col++)
        {

        sum+=x[row][col];
        }
         printf("sum of elements of row %d =%d\n",row+1,sum);
    }

    for (row=0;row<size;row++)
    {
        sum=0;
        for (col=0;col<size;col++)
        {

        sum+=x[row][col];
        }
        printf("sum of elements of column %d=%d\n",row+1,sum);
    }

    return 0;
}
