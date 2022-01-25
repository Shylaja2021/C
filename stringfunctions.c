#include<stdio.h>

void main(){
char str[100];
int vow=0,cons=0,digit=0,ws=0,sc=0,words=0,i;
printf("Enter a sentence:\n");
scanf("%[^\n]s",&str);
for(i=0;str[i]!='\0';i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
        vow+=1;
    }
    else if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
        cons+=1;
    }

      else if(str[i]>='0' && str[i]<='9')
        {
            digit+=1;
        }
        else if(str[i]==' '){
            ws+=1;
        }
        else{
            sc+=1;
        }
}
for(i=0;str[i]!='\0';i++){
    if((str[i]==' ')&&(str[i+1]!=' ')){
        words+=1;
}
}
printf("Number of vowels in is : %d\n",vow);
printf("Number of consonants is : %d\n",cons);
printf("Number of digits is : %d\n",digit);
printf("Number of spaces is : %d\n",ws);
printf("Number of special characters is : %d\n",sc);
printf("Number of words is : %d\n",words);
}
