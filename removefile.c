#include<stdio.h>

void main()
{
    char fname[1000];
     int c;
   printf("\nEnter the File name to remove:");
    scanf("%s",fname);

   c=remove(fname);
   if(c==0)
    printf("files removed successfully");
   else  printf("failed");

}
