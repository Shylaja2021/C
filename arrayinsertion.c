#include<stdio.h>

void main()
{
int size,i,ele,pos;
printf("Enter the size of the array: ");
scanf("%d",&size);
int a[size];
printf("enter the array elements: ");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
    printf("Enter the position to insert: ");
    scanf("%d",&pos);
    printf("Enter the array element to insert: ");
    scanf("%d",&ele);
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=ele;

 printf("array elements after insertion: \n");
for(i=0;i<=size;i++)

{
    printf("%d\n",a[i]);
}

}





