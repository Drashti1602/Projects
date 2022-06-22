#include<iostream>
using namespace std;
class Complex
{
private:
    int a,b;
public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata()
    {
        cout<<a<<"+"<<b<<"i"<<endl;
    }
    Complex operator +(Complex C)
    {
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex operator -(Complex C)
    {
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
    }
    Complex operator *(Complex C)
    {
        Complex temp;
        temp.a=a*C.a;
        temp.b=b*C.b;
        return temp;
    }
    bool operator ==(Complex C)
    {
        if(a==C.a && b==C.b)
            return true;
           else
            return false;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setdata(5,6);
    c2.setdata(1,2);
    c3=c1+c2;
    c3.showdata();
    c3=c1-c2;
    c3.showdata();
    c3=c1*c2;
    c3.showdata();
   // bool d=c1==c2;
    if(c1==c2)
        cout<<"same";
    else
        cout<<"not same";
    return 0;
}
