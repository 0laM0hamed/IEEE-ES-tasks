#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int l;
      char string1[MAX];
     char string2[MAX];
    char* str1 = string1;
     char* str2 = string2;
    printf("enter a string\t");
    scanf("%s",&string1);
    while (*(str1))
    {
        str1++;
        l++;
        str1--;

    }
    while(l>=0)
    {
        *(str2++)=*(--str1);
        l--;

    }
     *str2='\0';
     printf("%s",str2);
    return 0;
}
