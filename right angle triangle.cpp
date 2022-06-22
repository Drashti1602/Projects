#include<iostream>
using namespace std;
int main()
{
            int a,b,c,x,y,z;
            printf("ENTER THREE VALUE");
            scanf("%d%d%d",&a,&b,&c);
            x=a*a;
            y=b*b;
            z=c*c;
            if(a>=b)
            {
                if(a>=c)
                {
                    if(x==y+z)
                        printf("RIGHT ANGLE TRIANGLE");
                }
                    else if(z==x+y)
                       printf("RIGHT ANGLE TRIANGLE");
                    else
                        printf("NOT RIGHT ANGLE TRIANGLE");
            }
            else
            {
                 if(b>=c)
                {
                    if(y==x+z)
                        printf("RIGHT ANGLE TRIANGLE");
                }
                else if(z==x+y)
                    printf(" RIGHT ANGLE TRIANGLE");
                else
                    printf("NOT  RIGHT TRIANGLE");

            }
            return 0;
}
