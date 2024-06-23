#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
int main()
{
    char str[max],word[max];
    int found,i;
    printf("enter any string");
    gets(str);
    printf("enter a word you want to search for");
    gets(word);
    for (int i;str[i]!='\0';i++)
    {
        if(str[i]==word[0])
        {
            found=1;
            for(int j=0;word[j]!='\0';j++)
            {
                if(str[i+j]!=word[j])
                {
                    found=0;
                    break;
                }
            }
        }
        if(found==1)
        {
            break;
        }
    }
    if(found==0)
    {
        printf("not found");
    }
    else
    {
        printf("the word found at index=%d",i+1);
    }

    return 0;
}
