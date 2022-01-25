#include<stdio.h>

void main()
{
    int num=10,*p2=&num,**p1=&p2;
    printf("\nvalue of num1 %d",num);
    printf("\nvalue of num1 using p2 %d",*p2);
//    printf("\nvalue of p2 %d",p2);
    printf("\nvalue of num1 using p1 %d",**p1);
    printf("\n================================");
    printf("\nvalue of num %d",num);
    printf("\nvalue of p2 %d",p2);
    printf("\nvalue of p1 %d",p1);
printf("\n================================");
    printf("\naddress of num %d",&num);
    printf("\naddress of num using p2 %d",p2);
    printf("\naddress of num using p1 %d",*p1);
    printf("\n================================");
    printf("\nvalue of num %d",num);
    printf("\naddress of num %d",&num);
    printf("\n================================");
    printf("\nvalue of p2 %d",p2);
    printf("\naddress of p2 %d",&p2);
    printf("\n================================");
    printf("\nvalue of p1 %d",p1);
    printf("\naddress of p1 %d",&p1);
    printf("\n================================");
}
