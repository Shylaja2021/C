#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fptr;
    int n,i;
    char fname[100],fcontent[100];
    printf("Enter the file name to create:\n");
    scanf("%s",fname);
    printf("Enter the number of lines:\n");
    scanf("%d",&n);
    printf("Enter the file content:\n");
    gets(fcontent);
    fptr=fopen(fname,"w");
    for(i=0;i<n;i++)
    {
        fgets(fcontent,sizeof(fcontent),stdin);
        fputs(fcontent,fptr);
    }
    fclose(fptr);

    fptr=fopen(fname,"r");
    printf("\n file content\n");
    char str1=fgetc(fptr);
    while(str1!=EOF)
    {
        printf("%c",str1);
        str1=fgetc(fptr);
    }
fclose(fptr);
}
