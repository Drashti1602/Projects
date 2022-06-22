#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"ENTER THE CHARECTER";
    cin>>ch;
    if(ch>=65&&ch<=90)
        cout<<"UPERCASE CHARECTER"<<endl;
    else
      if(ch>=97&&ch<=122)
          cout<<"LOWERCASE CHARECTER"<<endl;
      else
          if(ch>=48&&ch<=57)
            cout<<"DIGIT"<<endl;
          else
            cout<<"SPECIAL SYMBOL";
          return 0;
}
