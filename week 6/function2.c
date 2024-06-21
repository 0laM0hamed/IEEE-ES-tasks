#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dia(float x);
float circ(float x);
float area (float x);
int main()
{
float x,y,c,a;
printf("enter the radius");
scanf("%f",&x);
y= dia(x);
printf("diameter of the circle is %.2f\n",y);
c= circ(x);
printf("circumference of the circle is %.2f\n",c);
a=area(x);
printf("area of the circle is %.2f\n",a);

    return 0;
}
float dia(float x)
{
    x=x*2;
    return x;
}
float circ(float x)
{
    x=2*M_PI*x;
    return x;
}
float area (float x)
{
    x=M_PI*(x*x);
    return x;
}
