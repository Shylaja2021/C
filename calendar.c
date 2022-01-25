#include<stdio.h>

void main()
{
    int i,days,day;
    printf("Enter number of days in a month :");
    scanf("%d",&days);
    printf("Enter first day in a month:\n Sunday = 1 \n Monday = 2 \n Tuesday = 3 \n Wednesday = 4 \n Thursday = 5 \n Friday = 6 \n Saturday = 7 \n ");
    scanf("%d",&day);
    printf(" Su Mo Tu We Th Fr Sa\n");
    for(i=1;i<day;i++)
    {
        printf("   ");
    }
    for(i=1;i<=days;i++)
    {
        printf("%3d",i);
        if((day+i-1)%7==0)
            printf("\n");
    }


}
