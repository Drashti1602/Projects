#include<stdio.h>
#include<conio.h>
#include<string.h>
void same(char [],char []);
main()
{
    int i;
    char s1[20],s2[20];
    printf("Enter two string");
    gets(s1);
    gets(s2);
    same(s1,s2);
    getch();

}
void same(char s1[],char s2[])
{
    int i,j,count=0;
    if(strlen(s1)==strlen(s2))
    {
    for(i=0;s1[i];i++)
    {
        for(j=i;s2[j];j++)
        {
            if(s1[i]==s2[j])
                count++;
        }
    }
    if(count>0)
       printf("same");
    else
        printf("not same");
   }
   else
     printf("not same");
}

