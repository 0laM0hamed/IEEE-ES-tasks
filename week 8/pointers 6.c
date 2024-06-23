#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
void printarr(int *arr,int size);

int main()
{
int arr1[MAX],arr2[MAX];
int size1,size2,i;
int *ptr1=arr1;
int *ptr2=arr2;
int *end1;
int *end2;
printf("enter size of first array\n");
scanf("%d",&size1);
printf("enter elements of first array\n");
for(i=0;i<size1;i++)
{
    scanf("%d",(arr1+i));
}
printf("enter size of second array\n");
scanf("%d",&size2);
printf("enter elements of second array\n");
for(i=0;i<size2;i++)
{
    scanf("%d",(arr2+i));
}
end1=(arr1+(size1-1));
end2=(arr2+(size2-1));
while(ptr1<=end1&&ptr2<=end2)
{
    *ptr1^=*ptr2;
    *ptr2^=*ptr1;
    *ptr1^=*ptr2;

    ptr1++;
    ptr2++;
}
printarr(arr1,size1);
printarr(arr2,size2);

    return 0;
}

void printarr(int *arr,int size)
{
    int*end=(arr+size-1);
    while(arr<=end)
    {
        printf("%d\t",*(arr++));
    }
}

// 6
