#include<stdio.h>
void main(){
int num,a,b,c;
printf("Enter the number to execute loop:");
scanf("%d",&num);
for(int i=1;i<=num;i++)
{
    printf("\nEnter the value of a,b,c:\n");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && a<c)
    {
        printf("A is the Smallest");
    }
    else if(b<c)
    {
        printf("B is the Smallest");
    }
    else
    {
        printf("C is the Smallest");
    }
}
}
