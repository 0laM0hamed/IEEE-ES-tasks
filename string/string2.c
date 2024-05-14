#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char string[MAX];
    char string2[MAX];
    printf("enter any string\n");
    gets(string);
    for(int i=0; i< MAX && string[i]!=0;i++)
    {

            string2[i]=string[i];


    }
    printf("%s",string);

    return 0;
}
