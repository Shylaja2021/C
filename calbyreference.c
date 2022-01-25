#include<stdio.h>
void swapping(int *a,int *b);
void main()
{
    int a,b;
    printf("Enter the value of a and b : ");
    scanf("%d %d",&a,&b);
    printf("Value of a and b before swap : %d %d",a,b);
    swapping(&a,&b);
    printf("\nValue of a and b after swap : %d %d",a,b);
}

void swapping(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
