#include<iostream>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
      void Demo()
    {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
    void SetTime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void ShowTime()
    {
        cout<<"Time = "<<h<<":"<<m<<":"<<s<<endl;
    }
    Time operator+(Time T)
    {
        cout<<"ADDITION OF TWO TIME = ";
        Time temp;
        temp.h=h+T.h;
        temp.m=m+T.m;
        temp.s=s+T.s;
        return temp;
    }
    Time operator -(Time T)
    {
        cout<<"SUBTRACTION OF TWO TIME =";
        Time temp;
        temp.h=h-T.h;
        temp.m=m-T.m;
        temp.s=s-T.s;
        return temp;
    }
    bool operator >(Time T)
    {
        if(h>T.h)
           return  true;
        if(h<T.h)
           return false;
        if(m>T.m)
          return true;
        if(m<T.m)
           return false;
        if(s>T.s)
           return true;

       return  false;
    }

};
int main()
{
    Time t1,t2,t3;
    t1.SetTime(8,2,1);
    t2.SetTime(8,1,1);
    t1.ShowTime();
    t2.ShowTime();
    t3=t1+t2;
    t3.Demo();
    t3.ShowTime();
    t3=t1-t2;
    t3.Demo();
    t3.ShowTime();
   // bool d=t1>t2;
    if(t1>t2)
        cout<<"T1 greater then T2";
    else
        cout<<"T2 greater then T1";

    return 0;
}
