#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct triangle
{
    int a,b,c;
};
typedef struct triangle triangle;
 void sort_area(triangle*tr,int n)
 {
     float p,s,temparea;
     struct triangle temp;
     int i,j;
     float area[n];
     for(i=0;i<n;i++)
     {
     p=((tr[i].a)+(tr[i].b)+(tr[i].c))/2.0;
     s= sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
     area[i]=s;
     }
     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-i-1;j++)
         {
             if (area[j]>area[j+1])
             {
                 temp=tr[j];
                 tr[j]=tr[j+1];
                 tr[j+1]=temp;
                 temparea=area[j];
                 area[j]=area[j+1];
                 area[j+1]=temparea;
             }
         }
     }

 }
int main()
{
    int n;
   scanf("%d",&n);
   triangle*tr=malloc(n*sizeof(triangle));
   for(int i=0;i<n;i++)
   {
       scanf("%d%d%d",&tr[i].a,&tr[i].b,&tr[i].c);
   }
   sort_area(tr,n);
   for(int i=0;i<n;i++)
   {
       printf("%d %d %d\n",tr[i].a,tr[i].b,tr[i].c);
   }
    return 0;
}
