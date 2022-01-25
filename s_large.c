#include<stdio.h>
void main()
{
/*int n,num,lg=0,slg=0,sm=0,ssm=0;
printf("enter the size");
scanf("%d",&n);


while(n>0)
{
    printf("enter the number:\n");
    scanf("%d",&num);
    if(num>lg)
    {
        slg=lg;
        lg=num;
    }
    else if(num>slg)
    {
        slg=num;
    }
    if(num<sm)
    {
        ssm=sm;
        sm=num;
    }
    else if(num<ssm)
    {
        ssm=num;
    }
    n--;
}

printf("largest number:%d\n",lg);
printf("second largest number:%d\n",slg);
printf("second smallest number:%d\n",ssm);*/

int c;
do
{
    c=getchar();
    if(c==27)
    {

        break;
    }
putchar(c);
}while(c!=27);
}
