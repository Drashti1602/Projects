#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENTER THE THREE VALUE";
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
            cout<<a<<"IS GREATER NUMBER"<<endl;
        else
            cout<<c<<"IS GREATER NUMBER"<<endl;
    }
     else
     {
         if(b>c)
            cout<<b<<"IS GREATER NUMBER"<<endl;
            else
            cout<<c<<"IS GREATER NUMBER"<<endl;
     }
     return 0;
}
