#include <stdio.h>
#include <stdlib.h>
#define max 100
void printarray(int arr[],int size);
int main()
{
    int size;
   int arr1[max],arr2[max];
   int* arr1_ptr=arr1;
   int* arr2_ptr=arr2;
   int*end_ptr;

   printf("enter size of the array");
   scanf("%d",&size);
   printf("enter elements of the array");
   for(int i=0;i<size;i++)
   {
       scanf("%d",(arr1_ptr+i));
   }
   end_ptr=&arr1_ptr[size-1];
   while(arr1_ptr<=end_ptr)
   {
       *arr2_ptr=*arr1_ptr;
       arr1_ptr++;
       arr2_ptr++;
   }
  printarray(arr2,size);
    return 0;
}
void printarray(int arr[],int size)
{

 for(int i=0;i<size;i++)
   {
       printf("%d\t",*(arr+i));
   }
}
