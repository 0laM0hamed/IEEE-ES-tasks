#include <stdio.h>
#include <stdlib.h>
int isarm(int x);
void printarm(int lower,int upper);
int main()
{
   int lower , upper;
   printf("enter the lower and upper limit");
   scanf("%d %d",&lower,&upper);
   printarm(lower,upper);
    return 0;
}
int isarm(int x)
{
    int temp,last,sum;
    temp=x;
    sum=0;
    while(temp!=0)
    {
        last=temp%10;
        sum+=(last*last*last);
        temp/=10;
    }
    if(x==sum)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void printarm(int lower,int upper)
{
    while(lower<=upper)
    {
        if(isarm(lower))
        {

        printf("%d\n",lower);
        }
        lower++;
    }

}
