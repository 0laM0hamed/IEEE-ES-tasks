#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE];
    int size, max1,max2;
    printf("enter the array size");
    scanf("%d",&size);
    printf("enter %d array elements",size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);


    max1= max2 = INT_MIN;
    if(arr[i]>max1)
    {
        max1=max2;
        arr[i]=max1;
    }
    else if (arr[i]> max2 && arr[i]< max1)
    {
        arr[i]=max2;
    }
    }
    printf("first largest=%d",max1);
    printf("second largest =%d",max2);
    return 0;
}
