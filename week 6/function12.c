#include <stdio.h>
#include <stdlib.h>
void printoddeven(int x,int y);
int main()
{int lower,upper;
   printf("enter the lower and upper limits");
   scanf("%d %d",&lower,&upper);
   printoddeven(lower,upper);
    return 0;
}
void printoddeven(int x,int y)
{
    if (x>y)
    {
        return 0;
    }
    printf("%d\t",x);
    printoddeven(x+2,y);
}
