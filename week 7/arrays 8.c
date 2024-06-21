#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000

int main()
{
int arr[MAX_SIZE],array[MAX_SIZE];
int size;
printf("enter the array size");
    scanf("%d",&size);
    printf("enter %d array elements",size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
        for (int i=0;i<size;i++)
        {
            array[i]=arr[i];
            printf("%d\t",array[i]);
        }


    return 0;
}
