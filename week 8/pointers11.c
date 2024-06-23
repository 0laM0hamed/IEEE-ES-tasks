#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3

void matrix1(int mat [][COL]);
void matrix2(int mat [][COL]);
void matrixmulti(int mat1 [][COL],int mat2 [][COL],int pro [][COL]);

int main()
{
    int mat1[ROW][COL];
    int mat2[ROW][COL];
    int pro[ROW][COL];
    printf("enter elements of first matrix at size %d %d\n",ROW,COL);
    matrix1(mat1);

     printf("enter elements of second matrix at size %d %d\n",ROW,COL);
     matrix1(mat2);

    matrixmulti(mat1,mat2,pro);
    printf("product = \n");
    matrix2(pro);
    return 0;
}

void matrix1(int mat [][COL])
{
    int row,col;
    for(row=0;row<ROW;row++)
    {
        for (col=0;col<COL;col++)
        {
            scanf("%d",(*(mat+row)+col));
        }
    }
}

void matrix2(int mat [][COL])
{
    int row,col;
    for(row=0;row<ROW;row++)
    {
        for (col=0;col<COL;col++)
        {
            printf("%d\t",*(*(mat+row)+col));
        }
        printf("\n");
    }
}
void matrixmulti(int mat1 [][COL],int mat2 [][COL],int pro [][COL])
{
    int row,col,sum,i;
    for(row=0;row<ROW;row++)
    {
        for (col=0;col<COL;col++)
        {
            sum=0;
            for (i=0;i<COL;i++)
            {
                sum+=(*(*(mat1+row)+i)) * (*(*(mat2+i)+col));
            }
            *(*(pro+row)+col)=sum;
        }
    }
}
