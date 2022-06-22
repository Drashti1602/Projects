#include<stdio.h>
#include<conio.h>
#include<string.h>
void cap(char []);
main()
{
    char s[20];
    printf("Enter string");
    gets(s);
    cap(s);
    getch();
    return 0;
}
void cap(char s1[])
{
   int i,cou,j;
   for(i=0;s1[i];i++)
   {
       j=s1[i];
       if(j>=97&&j<=122)
          s1[i]=j-32;
        else
          printf("%c",s1[i]);
        printf("%c",s1[i]);
        }
   }

