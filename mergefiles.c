#include <stdio.h>
#include <stdlib.h>
void main()
{
    FILE *f1,*f2,*n;
    char fname1[100],fname2[100],fname3[100],ch;
    printf("\nEnter the File 1 name :");
    scanf("%s",fname1);
    f1 = fopen(fname1, "r");
    if (f1 == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(1);
    }
    printf("\nEnter the File 2 name :");
    scanf("%s",fname2);
    f2 = fopen(fname2, "r");
    if (f2 == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(1);
    }
    printf("\nEnter the new file to add content of file1 and file2 :");
    scanf("%s",fname3);
    n = fopen(fname3, "w");
    if (f1 == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(1);
    }

    while((ch=fgetc(f1))!=EOF)
    {
        putc(ch,n);
    }
    while((ch=fgetc(f2))!=EOF)
    {
        putc(ch,n);
    }
    fclose(f1);
    fclose(f2);
     fclose(n);
     n = fopen(fname3, "r");
    char fcontent[100];
    printf("\nthe content of file after merging :\n");
    fread(&fcontent, sizeof(fcontent), 1, n);
    puts(fcontent);
    fclose(n);
}
