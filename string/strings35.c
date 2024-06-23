#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100

void trim (char*str);
int main()
{
char str[max];
printf("enter the sentence");
gets(str);
trim(str);
printf("string after removing white space is %s",str);

    return 0;
}
void trim (char*str)
{
    int index=0,i=0;
    while(str[index]==' '||str[index]=='\n'||str[index]=='\t')
    {
        index++;
    }

if(index!=0)
{
    while(str[i+index]!='\0')
    {
        str[i]=str[i+index];
        i++;
    }
    str[i]='\0';
}
}
