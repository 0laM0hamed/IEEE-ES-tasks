#include <stdio.h>
#include <stdlib.h>
int factorial(int num);
int main()
{
    int x,fac;
    printf("enter a number");
    scanf("%d",&x);
    fac=factorial(x);
    printf("%d",fac);
    return 0;
}
int factorial(int num)
{
    if (num==0)
    {
        return 1;
    }
    return num*factorial(num-1);
}
