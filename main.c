#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char string1[MAX];
     char string2[MAX];
    char* str1 = string1;
     char* str2 = string2;
    printf("enter first string\t");
    scanf("%s",&string1);
     printf("enter second string\t");
    scanf("%s",&string2);
    while(*str1)
    {
        *(++str1);
    }
    while(*str2)
    {
        *(str1)=*(str2);
        str1++;
        str2++;
    }
    *str1='\0';
    printf("%s",string1);
        return 0;
}
