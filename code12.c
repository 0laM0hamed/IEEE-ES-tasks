#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int c=0;
    char string[MAX];
    char* str = string;
    printf("enter a string\t");
    scanf("%s",&string);
    while (*str!='\0')
    {
        c++;
        str++;
    }
    printf("length=%d",c);
    return 0;
}
