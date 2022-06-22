#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    int i,j,count=0;
    char s1[20],s2[20];
    printf("Enter two string");
    gets(s1);
    gets(s2);
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
