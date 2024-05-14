#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
     char string[MAX] ;
    printf("enter any sentence\n");
    gets(string);
    for (int i=0;string[i]!=0;i++)
    {
        if (string[i]>='A'&&string[i]<='Z')
        {
            string[i]=string[i]+32;
        }
    }
    printf("%s",string);

    return 0;
}
