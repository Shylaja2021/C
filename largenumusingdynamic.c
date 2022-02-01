#include<stdio.h>
#include<stdlib.h>

void main()
{
    int n,lg=0;
    int *a;
    printf("Enter the number of elements : \n");
    scanf("%d",&n);
    a=(int *)calloc(n,sizeof(int));
    if(a==NULL)
    {
        printf("\n memory could not allocated");
        exit(1);
    }
    printf("Enter the numbers : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",a+i);
    }
    for(int i=0;i<n;i++)
    {
        if(*(a+i) > lg ) //a[0]=5
        {
           lg =*(a+i);
        }
    }
    printf("largest number : %d",lg);
//    for(int i=0;i<n;i++)
//    {
//        printf("\n%d",*(a+i));
//    }
    free(a);
}
