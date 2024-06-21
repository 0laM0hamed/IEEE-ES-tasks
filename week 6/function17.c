#include <stdio.h>
#include <stdlib.h>
int sumdigits(int num);
int main()
{
    int x,sum;
   printf("enter a number");
   scanf("%d",&x);
   sum=sumdigits(x);
   printf("sum of digits equal %d",sum);
    return 0;
}
int sumdigits(int num)
{

    if(num==0)
    {
        return 0;
    }
   return ((num%10)+sumdigits(num/10));
}
