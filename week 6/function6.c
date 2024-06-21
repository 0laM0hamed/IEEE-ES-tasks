#include <stdio.h>
#include <stdlib.h>
int isprime(int x);
void printprime(int lower,int upper);
int main()
{
    int lower ,upper;
    printf("enter the lower and upper limit");
    scanf("%d%d",&lower,&upper);
     printprime(lower,upper);
    return 0;
}
void printprime(int lower,int upper)
{

    while(lower<=upper)
    {
        if(isprime(lower))
        {
            printf("%d",lower);

        }
        lower++;
    }
}
int isprime(int x)
{
    for(int i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
            return 0;
        }
    }
    return 1;
}
