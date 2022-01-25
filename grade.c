/* #include<stdio.h>

void main()
{
    int phy,che,bio,mat,com;
    float per;
    printf("Enter the marks scored in Physics : ");
    scanf("%d",&phy);

    printf("Enter the marks scored in Chemistry : ");
    scanf("%d",&che);
    printf("Enter the marks scored in Biology : ");
    scanf("%d",&bio);
    printf("Enter the marks scored in Mathematics : ");
    scanf("%d",&mat);
    printf("Enter the marks scored in Computers : ");
    scanf("%d",&com);
    per=(((phy+che+bio+mat+com)/500.00)*100.00);
printf("\n percentage: %.2f",per);
    if(per>=90)
    {
        printf("\n Grade A");
    }

    else if(per>=80 && per<=89)
    {
          printf("\n Grade B");
    }


     else if(per>=70 && per<=79)
     {
         printf("\n Grade C");
     }


    else if(per>=60 && per<=69)
    {
         printf("\n Grade D");
    }


   else if(per>=40 && per<=59)
   {
       printf("\n Grade E");
   }

    else
    {
       printf("\n Grade F");
    }



}
*/

#include<stdio.h>

void main()
{
    int phy,che,bio,mat,com;
    int per;
    printf("Enter the marks scored in Physics : ");
    scanf("%d",&phy);

    printf("Enter the marks scored in Chemistry : ");
    scanf("%d",&che);
    printf("Enter the marks scored in Biology : ");
    scanf("%d",&bio);
    printf("Enter the marks scored in Mathematics : ");
    scanf("%d",&mat);
    printf("Enter the marks scored in Computers : ");
    scanf("%d",&com);
    per=(((phy+che+bio+mat+com)/500.00)*100.00);
    printf("\n percentage: %d",per);
    switch(per)
    {


    case 100:
    case 90:
        printf("\n Grade A");
        break;


    case 89:
    case 80:
          printf("\n Grade B");
          break;


     case 79:
     case 70:

         printf("\n Grade C");
         break;


    case 69:
    case 60:

         printf("\n Grade D");
         break;


   case 40:
   case 59:

       printf("\n Grade E");
       break;

   default:
       printf("\n Grade F");


    }

}

