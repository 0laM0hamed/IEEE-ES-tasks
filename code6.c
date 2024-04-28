#include <stdio.h>
#include <stdlib.h>
#define MAX 1000

int main()
{
int arr1[MAX],arr2[MAX];
int size1,size2,i;
int *ptr1=arr1;
int *ptr2=arr2;
int *end1=&arr1[size1-1];
int *end2=&arr2[size2-1];
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
while(ptr1<=end1&&ptr2<=end2)
{
    int temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    ptr1++;
    ptr2++;
}
for (i=0;i<size1;i++)
{
    printf("%d\t",arr1);

}
for (i=0;i<size2;i++)
{
    printf("%d\t",arr2);

}

    return 0;
}
