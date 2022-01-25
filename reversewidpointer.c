#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
    int i,len;
    char *p1,*p2,ch;
    len=strlen(str);
//    printf("len %d",len);
    p1=str;
    p2=str;
    for(i=0;i<len-1;i++)
    {
        p2++;
    }
    for(i=0;i<len/2;i++)
    {
        ch=*p2;
        *p2=*p1;
        *p1=ch;
        p1++;
        p2--;
    }
}
void main()
{
    char str[100],*sptr=str;
    printf("Enter a string: ");
    gets(str);
    reverse(str);
    printf("Reverse of a string: %s",str);


}

