#include<stdio.h>

void main()
{
    int size,i,ele;
printf("Enter the size of the array: ");
scanf("%d",&size);
int a[size];
printf("enter the array elements: ");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}

    printf("Enter the array element to delete: ");
    scanf("%d",&ele);
    for(i=0;i<size;i++)
{
    if(a[i]==ele)
    {
        printf("Deleted %d at index %d \n",ele,i);
        size=size-1;
        for(int j=i;j<size;j++){
            a[j]=a[j+1];

        }
    }
}
 printf("array elements after deletion: \n");
for(i=0;i<size;i++)

{
    printf("%d\n",a[i]);
}

}





