#include<stdio.h>

void main()
{
//    FILE *p;
//    char ch;
//
//    p=fopen("D:/username.txt","w");
//    printf("\nEnter your name:");
//    while((ch=getchar())!='\n')
//    {
//        putc(ch,p);
//    }
//    fclose(p);
//
//    p=fopen("username.txt","r");
//    printf("\nFile content:\n");
//    while((ch=getc(p))!=EOF)
//    {
//        printf("%c",ch);
//    }
//    fclose(p);

    FILE *p;
    char num[100]="n99";
    p=fopen("username1.txt","w");
    if(p!=NULL)
    {

        fprintf(p,"%s",num);

    }
    fclose(p);

    FILE *p1;
    char num1[100]="n99";
    p1=fopen("username2.txt","w");
    if(p1!=NULL)
    {
        fwrite(&num1,sizeof(num1),1,p1);
    }
    fclose(p1);
}
