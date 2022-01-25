#include<stdio.h>
#include<string.h>
void reverse(int n,int *a)
{
    int i,j=n-1,temp;
    for(i=0;i<j;i++)
    {

        temp=*(a+i);
        *(a+i)=*(a+j);
        *(a+j)=temp;
        j--;

    }
}
void main()
{
    int n,i;
    printf("\nEnter the array size : ");
    scanf("%d",&n);
    int a[n];
    printf("\nEnter the array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
//    reverse(n,a);
//    printf("\narray elements after reversing : ");
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",*(a+i));
//    }
   int *p;
   p=&a[n-1];
    printf("\narray elements after reversing : ");
    for(i=0;i<n;i++)
    {
        printf("%d ",*p--);
    }

}

