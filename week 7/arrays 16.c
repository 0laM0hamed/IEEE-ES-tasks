#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main()
{
int arr[MAX_SIZE];
int size,i;
printf("enter the array size");
    scanf("%d",&size);
    printf("enter %d array elements",size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);

    }
    for (i=size-1;i>=0;i--)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
