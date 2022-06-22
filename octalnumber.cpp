#include<iostream>
using namespace std;
int main()
{
    int n,r,flage;
    cout<<"ENTER THE  NUMBER ";
    cin>>n;
    while(n)
      {
        r=n%10;
        if(r>8)
          {
            flage=1;
            break;
          }
        else
          flage=0;
        n=n/10;
       }
  if(flage==1)
        cout<<"NOT OCTAL NUMBER";
  else
        cout<<"OCTAL NUMBER";

   return 0;
}
