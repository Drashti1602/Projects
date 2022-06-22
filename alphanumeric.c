#include<stdio.h>
#include<conio.h>
#include<string.h>
int f1(char []);
main()
{
    int i,count=0;
    char s[i];
    printf("enter string =");
    gets(s);
    int a=f1(s);
    if(count==1)
    printf("alphanumeric");
    else
    printf("not alphanumeric");
}
int f1(char s1[])
{
    int i,j,l,count=0;
     l=strlen(s1);
    for(i=0;i<=l;i++)
    {
        j=s1[i];
        if(j<90&&j>65)
           count=1;
        if(j<122&&j>97)
           count=1;
        if(j<57&&j>48)
            count=1;
        else
            count=0;
    }
}
