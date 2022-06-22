#include<stdio.h>
#include<conio.h>
#include<string.h>
void words(char s[]);
int main()
{
    int i;
    char s[20];
    printf("Enter string = ");
    gets(s);
    words(s);
}
void words(char a[])
{
   int i,l,count=1;
   l=strlen(a);
   for(i=0;i<=l;i++)
   {
    if(a[i]==' ')
     count++;
    else
        continue;
   }
   if(count>0)
    printf("words = %d",count);

}
