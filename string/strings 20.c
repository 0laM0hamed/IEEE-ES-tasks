#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
int main()
{
    char str[max];
    int freq[26],len,i;
    printf("enter any string");
    gets(str);
    len=strlen(str);
    for(i=0;i<26;i++)
    {
        freq[i]=0;
    }
    for(i=0;i<len;i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            freq[str[i]-97]++;
        }
        else if (str[i]>='A'&&str[i]<='Z')
        {
            freq[str[i]-65]++;
        }

    }
     for(i=0;i<26;i++)
     {
         if(freq[i]!=0)
         {
    printf("frequency of '%c' is %d\n ",(i+97),freq[i]);
     }
     }
    return 0;
}
