#include <stdio.h>
#include <stdlib.h>
#define size 100
int main()
{
    int num,arr[size],sum;
    printf("enter the number of elements");
    scanf("%d",&num);
    printf("enter elements of the array");
    for(int i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    printf("sum of elements is =%d",sum);
    return 0;
}
