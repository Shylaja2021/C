#include<stdio.h>
#define ROW 2
#define COL 2
void elements(int m1[][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            scanf("%d",(*(m1+i)+j));
        }
    }
}

void printelemnts(int m1[][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%d ",*(*(m1+i)+j));
        }
        printf("\n");
    }
}

void multiply(int m1[][COL],int m2[][COL],int res[][COL])
{
    int i,j,k,sum;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            sum=0;
        for(k=0;k<COL;k++)
        {
            sum+=(*(*(m1+i)+k))*(*(*(m2+k)+j));
        }
       *(*(res+i)+j)=sum;
        }
    }
}
void main()
{
    int m1[ROW][COL],m2[ROW][COL],res[ROW][COL];
    printf("\nEnter the elements of Matrix1:");
    elements(m1);
    printf("\nEnter the elements of Matrix2:");
    elements(m2);
    multiply(m1,m2,res);
    printf("\nProduct of 2 matrix : ");
    printelemnts(res);
}
