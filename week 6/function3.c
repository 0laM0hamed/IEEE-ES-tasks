#include <stdio.h>
#include <stdlib.h>
int maximum(int x,int y);
int minimum(int x,int y);
int main()
{
    int x,y,max,min;
printf("enter 2 numbers");
scanf("%d %d",&x,&y);
max = maximum(x,y);
min = minimum(x,y);
printf("maximum number is %d and minimum numer is %d",max,min);

    return 0;
}
int maximum(int x,int y)
{
    if(x>y)
    {
       return x;
    }
    else {
        return y;
            }

}

int minimum(int x,int y)
{
    if (x>y)
    {
        return y;
    }
    else
    {
       return x;
    }
}
