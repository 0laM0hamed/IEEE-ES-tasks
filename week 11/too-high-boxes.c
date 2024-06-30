#include <stdio.h>
#include <stdlib.h>
#define Max 41
struct box
{
    int length,width,height;
};
typedef struct box box;

int getvolume( box b)
{
    return (b.length*b.width*b.height);
}
int checkheight( box b)
{
if(b.height<Max)
{
    return 1;
}
else
    return 0;
}
int main()
{
    int number;
    printf("enter number of boxes");
    scanf("%d",&number);
    box*boxes=malloc(number*sizeof(box));
    for(int i=0;i<number;i++)
    {
        scanf("%d%d%d",&boxes[i].length,&boxes[i].width,&boxes[i].height);
    }
    for(int i=0;i<number;i++)
    {

    if(checkheight(boxes[i]))
    {
        printf("%d\n",getvolume(boxes[i]));
    }

    }
    return 0;
}
