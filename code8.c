#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
int main()
{
    int arr[MAX];
int size,i,temp,index=0,search;
int *ptr=&arr[0];
int *end1=&arr[size-1];

printf("enter size of first array\n");
scanf("%d",&size);
printf("enter elements of first array\n");
for(i=0;i<size;i++)
{
    scanf("%d",(arr+i));
}
printf(" enter the element you want to search for");
scanf("%d"&,search)
while (arr<= end1&& *arr!=search)
{
    arr++;
    index++;
}
 if(arr<= end1&& *arr==search)
{
    printf("%d exist",search);
}

  return 0;


}
