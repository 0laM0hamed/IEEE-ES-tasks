#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define max 100
void deletechar(char*str, const char ch);
int main()
{
    char str[max];
    char ch;
    printf("enter any string");
    gets(str);
    printf("enter the character you want to delete from");
    ch=getchar();
    deletechar(str,ch);
    printf("%s",str);
    return 0;
}
void deletechar(char*str,char ch)
{
    int i,j;
    int len= strlen(str);
    for(i=0;i<len;i++)
    {
        if (str[i]== ch)
        {
            for(j=i;j<len;j++)
            {
                str[j]=str[j+1];
            }
            len--;
            i--;
        }
    }
}
