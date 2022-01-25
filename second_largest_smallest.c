#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the length of the array : \n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the Array Elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int temp;
        for(j=i+1;j<n;j++){
            if(a[i]<a[j])
            {

                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Second Largest Number is %d : \n",a[1]);
    printf("Second Smallest Number is %d : ",a[n-2]);
}
