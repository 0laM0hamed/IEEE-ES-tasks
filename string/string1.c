#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char string[MAX] ;
    int count=0,i;
    printf("enter any sentence\n");
    gets(string);
    for(i=0;string[i]!=0&&i<MAX;i++)
    {
        count++;
    }
    printf("%d",count);

    return 0;
}
