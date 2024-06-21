#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 #include <math.h>
int markssum(int* marks, int num ,char gender)
{
     int sum=0;
    if (gender=='b')
    {
        for(int i=0;i<num;i+=2)
            sum+=marks[i];
    }
    else if (gender=='g')
    {
        for(int i=1;i<num;i+=2)
            sum+=marks[i];

    }
    return sum;
}

int main()
{ int num,sum;
char gender;
    printf("enter the number of students");
    scanf("%d",&num);
    printf("enter students' marks");
    int * marks=(int*) malloc (num*sizeof(int));
    for (int student=0;student<num;student++)
    {
        scanf("%d",(marks+student));
    }
    printf("enter gender of students g for girls and b for boys");
    scanf("%s",& gender);
   sum= markssum(marks,num,gender);
   printf("sum is %d",sum);

    return 0;
}
