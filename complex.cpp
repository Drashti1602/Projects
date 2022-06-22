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
    Complex Addition(Complex C)
    {
        cout<<"ADDITION OF TWO COMPLEX NUMBER = ";
        Complex temp;
        temp.a=a+C.a;
        temp.b=b+C.b;
        return temp;
    }
    Complex Subtraction(Complex C)
    {
        cout<<"SUBTRACTION OF TWO COMPLEX NUMBER = ";
        Complex temp;
        temp.a=a-C.a;
        temp.b=b-C.b;
        return temp;
    }
    Complex Multiplication(Complex C)
    {
        cout<<"MULTIPLICATION OF TWO COMPLEX NUMBER = ";
        Complex temp;
        temp.a=a*C.a;
        temp.b=b*C.b;
        return temp;
    }



};
int main()
{
  Complex c1,c2,c3;
  c1.setdata(10,20);
  c2.setdata(5,10);
  c1.showdata();
  c2.showdata();
  c3=c1.Addition(c2);
  c3.showdata();
  c3=c1.Subtraction(c2);
  c3.showdata();
  c3=c1.Multiplication(c2);
  c3.showdata();
  return 0;
}
