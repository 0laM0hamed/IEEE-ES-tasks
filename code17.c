#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void sort (int n, int*ptr)
{
    int i,j,t;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if (*(ptr+i)>*(ptr+j))
            {
                t=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=t;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }

}

int main()
{
    int size;
    int arr[MAX];
    printf("enter array size");
    scanf("%d",&size);
    printf("enter array elements");
    for (int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(size,arr);
    return 0;
}
