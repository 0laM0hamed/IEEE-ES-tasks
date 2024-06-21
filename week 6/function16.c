#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int palind (num);
int reverse (num);
int main()
{
    int x;
    printf("enter a number");
    scanf("%d",&x);
    palind(x);
    if(palind(x))
    {
        printf("number is palindrome");
    }
    else
    {
        printf("number is not palindrome");
    }
    return 0;
}
int palind (num)
{
    if(num=reverse(num))
    {
        return 1;
    }
    return 0;
}
int reverse (num)
{
    int digit;
    digit=log10(num);

    if (num==0)
    {
        return 0;

    }
    return (num%10*pow (10,digit)+reverse(num/10));
}
