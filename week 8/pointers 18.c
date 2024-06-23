#include <stdio.h>
#include <stdlib.h>
#define MAX 10


int * getNEvenNumbers(const int n , int*num);
int main()
{
int arr [MAX];
 getNEvenNumbers (MAX,arr);
for (int i=0;i<MAX;i++)
{
    printf("%d\t",*(arr+i));
}
    return 0;
}
int * getNEvenNumbers(const int n , int*num)
{
    for(int i=0;i<n;i++)
    {
        *(num+i)=2*(i+1);
    }
    return num;
}
