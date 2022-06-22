#include<iostream>
using namespace std;
main()
{
    int a,b,temp;
    cout<<"ENTER THE THREE NUMBERS";
     cin>>a>>b;
    cout<<"BEFORE SWAP"<<"a="<<a<<endl<<"b="<<b<<endl;;

    temp=a;
    a=b;
    b=temp;
    cout<<"AFTER SWAP"<< "a="<<a<<endl<<"b="<<b;
    return 0;
}
