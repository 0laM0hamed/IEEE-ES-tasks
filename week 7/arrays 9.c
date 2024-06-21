#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 1000
int main()
{
    int arr[MAX_SIZE];
int size,num,pos,i;
printf("enter the array size");
    scanf("%d",&size);
    printf("enter %d array elements",size);
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("number to insert");
    scanf("%d",&num);
    printf("position of the number");
    scanf("%d",&pos);
    if (pos>size+1||pos<=0)
    {
printf("error! please enter a position betwwen 0 and %d",size);
    }
    else
    {
        for (i=size;i>=pos;i--)
        {
            arr[i]=arr[i-1];
        }
      arr[pos]=num;
            size++;
    for (i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    }



    return 0;
}
