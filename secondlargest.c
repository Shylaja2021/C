#include<stdio.h>
void main(){
int a,b,c;
printf("Enter the value of a,b,c : \n");
scanf("%d %d %d",&a,&b,&c);
if(a>=b && a>=c){
    if(b>=c)
    {
        printf("B is the Second Largest");
    }
    else
    {
        printf("C is the Second Largest");
    }
}
else if(b>=a && b>=c)
{
    if(a>=c)
    {
        printf("A is the Second Largest");
    }
    else
    {
        printf("C is the Second Largest");
    }
}
else if(a>=b)
{
    printf("A is the Second Largest");
}
else{
    printf("B is the Second Largest");
}
}
