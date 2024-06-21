#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main()
{
int arr[MAX_SIZE];
int size,i,j,temp;
printf("enter the array size");
    scanf("%d",&size);
    printf("enter %d array elements",size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    for (int i=0;i<size;i++)
    {
        for (int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
             temp=arr[i];
             arr[i]=arr[j];
             arr[j]=temp;
            }
        }
    }
    for (int i=0;i<size;i++)
    {

    printf("%d\t",arr[i]);
    }

    return 0;
}
