#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int main()
{
int arr1[MAX_SIZE],arr2[MAX_SIZE],arr3[MAX_SIZE];
int size1,size2,i;
printf("enter the array1 size");
    scanf("%d",&size1);
    printf("enter %d array1 elements",size1);
    for (int i=0;i<size2+size1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter the array2 size");
    scanf("%d",&size2);
    printf("enter %d array1 elements",size2);
     for (int i=0;i<size2+size1;i++)
    {
        scanf("%d",&arr2[i]);
    }
    size3=size1+size2;
    for (int j=0;i<size3;j++)
    {

         if (arr1[i]<arr2[i])
             {
                 arr3[j]=arr1[i];

             }
                else
                {
                    arr3j]=arr2[i];
                }

    }
    printf("%d",arr3[i]);

    return 0;
}
