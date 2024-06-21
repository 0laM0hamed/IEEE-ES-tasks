#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE];
    int size,num;
    printf("enter array size");
    scanf("%d",&size);
    printf("enter %d array elements",size);
   for (int i=0;i<size;i++)
   {
       scanf("%d",&arr[i]);
       printf("%d",arr[i]);
   }


}
