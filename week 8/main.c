#include <stdio.h>
#include <stdlib.h>
void update(int*a,int*b);
int main()
{
    int a,b;
    int *pa=&a,*pb=&b;
    printf("enter two intgers");
    scanf("%d %d",&a,&b);
    update(pa,pb);
    printf("%d %d\n",a,b);
    return 0;
}
void update(int*a,int*b)
{
    int f,d;
    f=(*a+*b);
    d=(*a-*b);
    if (d<0)
    {
        d=-d;    }


*a=f;
*b=d;
}
