
#include<stdio.h>

void main()
{
    int a=20,b=30,*p1=&a,*p2=&b;
    printf("\n using addition and subtraction ");
    printf("\n Values before swap : ");
    printf("\n a = %d",a);
    printf("\n b = %d",b);
    *p1=(*p1)+(*p2);
    *p2=(*p1)-(*p2);
    *p1=(*p1)-(*p2);
    printf("\nValues after swap : ");
    printf("\n a = %d",a);
    printf("\n b = %d",b);
     printf("\n using multiplication and division ");
    printf("\nValues before swap : ");
    printf("\n a = %d",a);
    printf("\n b = %d",b);
    *p1=(*p1)*(*p2);
    *p2=(*p1)/(*p2);
    *p1=(*p1)/(*p2);
    printf("\nValues after swap : ");
    printf("\n a = %d",a);
    printf("\n b = %d",b);
}
