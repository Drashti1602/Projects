#include<iostream>
using namespace std;
#include<string.h>
class Operation
{
private:
    static float pi;
   // char s1[50]="hello",s2[50]="world";
public:
    void Area(int r)
    {
        cout<<"AREA OF CIRCLE ="<<pi*r*r<<endl;
    }
    void Area(int r,int n)
    {
        cout<<"AREA OF RECTANGLE ="<<r*n<<endl;
    }
    void Add(int a,int b)
    {
        cout<<"SUM OF TWO INT VALUE ="<<a+b<<endl;
    }
     void Add(float a,float b)
    {
        cout<<"SUM OF TWO FLOAT VALUE ="<<a+b<<endl;
    }
    void concate(char *s1,char *s2)
     {
       strcat(s1,s2);
        //string s3=s1+s2;
        cout<<s1;
     }

};
float Operation::pi=3.14;
int main()
{
    Operation o1,o2,o3,o4,o5;
    char s1[20]="heloo";
    char s2[20]="world";
    o1.Area(1);
    o2.Area(1,2);
    o3.Add(2,3);
    o4.Add(1.1f,1.2f);
    o5.concate(s1,s2);
    return 0;
}
