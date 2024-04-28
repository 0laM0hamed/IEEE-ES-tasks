#include <stdio.h>
#include <stdlib.h>
#define Max 1000

int main()
{
int arr1[Max] , arr2[Max];
int size,i=0;
int *ptr1=arr1;
int *ptr2=arr2;
int *end=&arr1[size-1];
printf("enter size of array");
scanf("%d",&size);
printf("enter elements of array");
for (i=0;i<size;i++)
{
    scanf("%d",&(*(ptr1+i)));
}
while (ptr1<=end)
{
    *ptr2=*ptr1;
    ptr1++;
    ptr2++;
}
for (i=0;i<size;i++)
{
    printf("%d",arr1[i]);
    printf("%d",arr2[i]);
}
    return 0;
}
