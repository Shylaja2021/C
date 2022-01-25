#include<stdio.h>
void main()
{
    int n,num,sm,lg,i;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("Enter the first number: \n");
    scanf("%d",&num);
    lg=num;
    sm=num;
    for(i=0;i<n-1;i++)
    {
        printf("Enter the another number: \n");
        scanf("%d",&num);
        if(num>lg)
            lg=num;
        if(num<sm)
            sm=num;
    }
    printf("Largest Number : %d\n",lg);
    printf("Smallest Number : %d",sm);
}
