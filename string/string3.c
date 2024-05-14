#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
    char string1[MAX];
     char string2[MAX];
     int i,j;

     printf("enter the first string\n");
     gets(string1);
      printf("enter the second string\n");
      gets(string2);
      i=0;
      while(string1!=0)
      {
          i++;

      }
      j=0;
      while(string2[j]!=0)
      {
          string1[i]=string2[j];
          i++;
          j++;
      }
      string1[i]='\0';
      printf("%s",string1);


    return 0;

}
