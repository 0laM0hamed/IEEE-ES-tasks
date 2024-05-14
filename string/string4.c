#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char string1[MAX];
    char string2[MAX];
    int count1=0,count2=0;

    printf("enter first string\n");
    gets(string1);
     printf("enter the second string\n");
      gets(string2);
    for(int i=0;string1[i]!=0&&i<MAX;i++)
    {
        count1++;
    }
    for(int i=0;string2[i]!=0&&i<MAX;i++)
    {
        count2++;
    }
    if (count1==count2)
    {
        printf("both are equal");

    }
    else if (count1>count2)
    {
        printf("string 1 is longer");
    }
    else if (count1<count2)
    {
        printf("string 2 is longer");
    }
    return 0;
}
