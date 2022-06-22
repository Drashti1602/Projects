#include<stdio.h>
#include<conio.h>
#include<string.h>
void vowel(char s1[]);
main()
{
    char s[20];
    printf("enter string");
    gets(s);
    vowel(s);
}
void vowel(char s1[])
{
    int i,count=0,j;
    char s[20],c[]={"AEIOUaeiou"};
    for(i=0;s1[i];i++)
    {
        if(s1[i]=='a' || s1[i]=='e' || s1[i]=='i' || s1[i]=='o' || s1[i]=='u' || s1[i]=='A' || s1[i]=='E' || s1[i]=='I' || s1[i]=='O' || s1[i]=='U' )
            count++;
      /*for(j=0;c[j];j++)
      {
        if(s1[i]==c[j])
        count++;
      }*/
    }
    if(count>0)
        printf("vowel of givien string=%d",count);
    else
        printf("No vowel");
}
