
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
# define MAX 100

struct student
{
    char name[MAX];
    int score;
};

int main()
{
    int tot=0,avr,size=5,score,high=0;
    struct student std[MAX];
    char name;
    //sorting students scores
     for ( int i=0 ; i< size; i++)
    {

    printf("enter student's name\t");
    scanf("%s",&std[i].name);
    printf("enter student's test score\t");
    scanf("%d",&std[i].score);

         tot+=std[i].score;
         if (std[i].score>high)
         {
             high=std[i].score;
         }

    }
//determine student with highest scores
    printf("highest score is %d\n",high);
    for(int i=0;i<size;i++)
    {
        if (std[i].score==high)
        {
            printf("WELL DONE!: %s\n",std[i].name);
        }
    }

    // determine students with scores below average
    avr=tot/size;
    printf(" average score is %d\n"<avr);
    printf("students with score smaller than the average:\n");

for(int i=0;i<size;i++)
    {
        if (std[i].score<avr)
        {
            printf("%s\n",std[i].name);
        }
    }

    return 0;
}

