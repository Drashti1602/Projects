#include<stdio.h>
#include<conio.h>
#include<string.h>
int Palindrome(char []);
main()
{
    int i;
    char s[i];
    printf("enter string =");
    gets(s);
    int b=Palindrome(s);
    if(b==1)
        printf("palindrome");
    else
        printf("Not plaindrome");

}
int Palindrome(char a[])
{
    int i,l;
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]==a[l-i-1])
            return 1;
            else
                return 0;
    }
}
