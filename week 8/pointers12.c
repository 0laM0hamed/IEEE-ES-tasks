#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int length;
    char string[MAX];
    char* str = string;
    printf("enter a string\t");
    gets(string);
    length=strlen(string);
    printf("length = %d",length);
    return 0;
}
