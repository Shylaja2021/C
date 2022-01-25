#include<stdio.h>
#include<string.h>

void maxchar(char str[]);

void main()
{
    char str[100];
    printf("Enter the string : ");
    gets(str);
    maxchar(str);
}

void maxchar(char str[])
{
    int len,i,max=0;
    int cnt[256]={0};
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        cnt[str[i]]++;
    }
    for(i=0;i<256;i++)
    {
        if(cnt[i]>cnt[max])
        {
            max=i;
        }
    }
    printf("\n Character '%c' appears maximum of %d times in %s ",max,cnt[max],str);
}
