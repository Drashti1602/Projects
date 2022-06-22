#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int i,count=0,j;
    char s[20],c[]={"aeiouAEIOU"};
    printf("enter string");
    gets(s);
    for(i=0;s[i];i++)
    {
        for(j=0;c[j];j++)
       {
         if(s[i]==c[j])
         count++;
       }
    }
    if(count>0)
        printf("%d",count);
    else
        printf("No vowel");
}
