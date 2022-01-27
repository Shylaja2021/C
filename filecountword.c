#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *fptr;
    char fname[100];
    char ch;
    int characters=0, words=0, lines=0;
    printf("Enter file name : ");
    scanf("%s", fname);
    fptr = fopen(fname, "r");
    if (fptr == NULL)
    {
        printf("\nUnable to open file.\n");
        exit(1);
    }
    while ((ch = fgetc(fptr)) != EOF)
    {
        characters++;
        if (ch == '\n' || ch == '\0')
            lines++;
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\0')
            words++;
    }
    if (characters > 0)
    {
        words++;
        lines++;
    }
    printf("\n");
    printf("Total characters = %d\n", characters);
    printf("Total words      = %d\n", words);
    printf("Total lines      = %d\n", lines);
    fclose(fptr);

}
