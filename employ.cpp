#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Employ
{
private:
    int id;
    char  name[20];
     int salary;
public:
    void setemid(int a)
    {
       id=a;
    }
    int getemid()
    {
          cout<<"****EMPLOY ID NUMBER : "<<id<<endl;
    }
     void setemname(char ch[])
    {
        strcpy(name,ch);
    }
    char getemname()
    {
          cout<<"****EMPLOY NAME : "<<name<<endl;
    }
    void setemsalary(int x)
    {
        salary=x;
    }
    int getemsalary()
    {
        cout<<"****EMPLOY SALARY :"<<salary<<endl;
    }

};
int main()
{
  Employ E1;
  char ch[20]={'D','R','A','S','H','T','I'};
  E1.setemid(101);
  E1.setemname(ch);
  E1.setemsalary(50000);
  E1.getemid();
  E1.getemname();
  E1.getemsalary();

  getch();
  return 0;
}
