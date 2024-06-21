#include <stdio.h>
#include <stdlib.h>
int func (int x);
int main()
{
    int x,y;
    printf("enter a number");
    scanf("%d",&x);
   y =func(x);
    printf("cube of the number is %d",y);

    return 0;
}
int func (int x)
{

    x=x*x*x;
    return x;
}
