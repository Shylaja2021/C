#include<stdio.h>
void sort(int n,int *p)
{
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+j)<*(p+i))
            {
                t=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=t;
            }
        }
    }
    printf("\narray elemnts after sorting\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
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
    sort(n,a);

}
