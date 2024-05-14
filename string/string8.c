#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char string[MAX] ;
    int alpha=0,digit=0,special=0;
    printf("enter any sentence\n");
    gets(string);
    for (int i=0;string[i]!=0;i++)
    {
        if (string[i]>='A'&&string[i]<='Z'||string[i]>='a'&&string[i]<='z')
        {
            alpha++;
        }
   else if( isdigit(string[i]))
   {
       digit++;

   }
   else
   {
       special++;
   }
    }
   printf("alpha=%d\n digit=%d\n special=%d",alpha,digit,special);
    return 0;
}
