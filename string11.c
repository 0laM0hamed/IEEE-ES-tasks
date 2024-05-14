#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    int i,j;
char string[MAX] ;
int len;
char temp;

    printf("enter any sentence\n");
    gets(string);
    len= strlen(string);
    for (int i=0,j=len-1;i<=j;i++,j--)
    {


        temp= string[i];

           string[i]= string[j];
           string[j]=temp;

        }

    printf("%s",string);

    return 0;
}
