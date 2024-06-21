#include <stdio.h>
#include <stdlib.h>
int nth (int n,int a,int b ,int c);
int main()
{ int n,a,b,c,y;
    printf("enter the nth number");
    scanf("%d",&n);
    printf("enter the first three numbers");
    scanf("%d %d %d",&a,&b,&c);
    y=nth(n,a,b,c);
    printf("%d",y);
    return 0;
}
int nth (int n,int a,int b ,int c)
{
    if (n==1)
    {
        return a;
    }
    else if(n==2)
    {
        return b;
    }
    else if(n==3)
    {
        return c;
    }
    return nth(n-1,a,b,c)+nth(n-2,a,b,c)+nth(n-3,a,b,c);

}
