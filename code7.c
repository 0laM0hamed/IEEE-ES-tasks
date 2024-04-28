#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int main()
{int arr[MAX];
int size,i,temp;
int *ptr=&arr[0];
int *end1=&arr[size-1];

printf("enter size of first array\n");
scanf("%d",&size);
printf("enter elements of first array\n");
for(i=0;i<size;i++)
{
    scanf("%d",(arr+i));
}
while (ptr<end1)
{
    *ptr=temp;
    *end1=*ptr;
    *end1=temp;
    *ptr++;
    end1--;
}
printf("%d",arr);
    return 0;
}
