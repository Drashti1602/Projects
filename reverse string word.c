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
   int i,l,count=0,len,j;
   char s[20];
   l=strlen(a);
   for(i=0;i<l;i++)
   {
     if(a[i]==' '&&a[i+1]!=' ')
     {
      for( j=i;j>=count;j--){
            printf("%c",s[j]);
            count=i+1;}
   }

}
}
