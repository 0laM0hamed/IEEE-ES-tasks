#include <stdio.h>
#include <stdlib.h>
#define MAX 1000
void scanarr(int * arr, int size);
int arrsearch(int * arr,int size ,int search);
int main()
{
    int arr[MAX];
int size,search,index;
printf("enter size of the array\n");
scanf("%d",&size);
printf("enter elements of the array\n");
scanarr(arr,size);
printf(" enter the element you want to search for");
scanf("%d",&search);
index=arrsearch(arr,size,search);
if(index=-1)
{
    printf("%d does not exist",search);
}
else
{
    printf("%d exist",search);
}

  return 0;


}
void scanarr(int * arr, int size)
{
    int * arrend=(arr+size-1);
    while(arr<=arrend)
{
    scanf("%d",arr++);
}
}
int arrsearch(int * arr,int size ,int search)
{
   int index = 0;
   int *arrend=(arr+size-1);
   while(arr<=arrend&&*arr!=search)
   {
       arr++;
       index++;
   }
   if(arr<=arrend)
   {
       return index;

   }
   return -1;
}
