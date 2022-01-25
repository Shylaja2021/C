#include<stdio.h>
#include<string.h>

void main()
{
    char str[100][100],search_str[100];
    int n,i,res=0;
    printf("Enter the number of Strings:\n");
    scanf("%d",&n);
    printf("Enter the list of Strings:\n");
    for(i=0;i<n;i++)
    {
      scanf("%s",&str[i]);
    }
    printf("Enter the string to be searched: ");
    scanf("%s",&search_str);
   for(i=0;i<n;i++)
   {
       if(strcmp(search_str,str[i])==0)
       {
           res=1;
           printf("%s found at %d ",search_str,i+1);
       }
   }
  if(res==0)
  {
     printf("%s not found",search_str);
  }
}
