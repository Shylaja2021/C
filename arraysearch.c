#include<stdio.h>

int find_array(int a[],int size);

void main()
{
    int size,i;
printf("Enter the size of the array: ");
scanf("%d",&size);
int a[size];
printf("enter the array elements: ");
for(i=0;i<size;i++)
{
    scanf("%d",&a[i]);
}
    int res=find_array(a,size);
    if(res==-1){
        printf("Element did not found!!!!");
    }
    else{
        printf("Element found at index : %d",res);
    }
}



int find_array(int a[],int size)
{
    int ele,i;
    printf("Enter the array element to search: ");
    scanf("%d",&ele);
    for(i=0;i<size;i++)
{
    if(a[i]==ele)
    {
        return i;
    }
}
return -1;
}
