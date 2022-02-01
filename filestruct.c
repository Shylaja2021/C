#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct college
{
    int id;
    char name[100];
    char address[100];
};

struct dept
{
    char id[100];
    char name[100];
    int students;
};

void collegedetails()
{
    struct college c[15];
    FILE *fptr;
    int id;
    char name[100];
    char address[100];
    int i=0;
    fptr=fopen("college.txt","r");
    if (fptr == NULL)
     {
      printf("\nError opening File\n\n");
      exit (1);
     }

    while(fscanf(fptr, "%d %s %s\n", &id,name,address)!=EOF)
    {
       //printf("%d %s %s\n",id,name,address);
       c[i].id=id;
       strcpy(c[i].name,name);//c[i].name=c[i].name;
       strcpy(c[i].address,address);
       i++;
    }
    printf("i=%d\n",i);
    for(int j=0;j<i;j++)
    {
    printf("%d ",c[j].id);
    printf("%s ",c[j].name);
    printf("%s ",c[j].address);
    printf("\n");
    }


//printf("outside while");
//     while(fread(&c, sizeof(struct college), 1, fptr))
//     {
//         printf("inside while");
//          printf ("id = %d   name = %s  address=%s\n",c.id, c.name, c.address);
//     }

fclose(fptr);
}
void deptdetails()
{
   struct dept d[15];
    FILE *fptr;
    char id[100];
    char name[100];
    int students;
    int i=0;
    fptr=fopen("dept.txt","r");
    if (fptr == NULL)
     {
      printf("\nError opening File\n\n");
      exit (1);
     }

    while(fscanf(fptr, "%s %s %d\n", id,name,&students)!=EOF)
    {
//       printf("%s %s %d\n",id,name,students);
       strcpy(d[i].id,id);
       strcpy(d[i].name,name);//c[i].name=c[i].name;
       d[i].students=students;
       i++;
    }

    for(int j=0;j<i;j++)
    {
    printf("%s ",d[j].id);
    printf("%s ",d[j].name);
    printf("%d ",d[j].students);
    printf("\n");
    }
fclose(fptr);
}
void main()
{
collegedetails();
deptdetails();

}
