#include<iostream>
using namespace std;
class Time
{
private:
    int h,m,s;
public:
    void setTime(int x,int y,int z)
    {
        h=x;
        m=y;
        s=z;
    }
    void showTime()
    {
        cout<<"TIME = "<<h<<"HOURS"<<" "<<m<<"MINUTES"<<"  "<<s<<"SECOND"<<endl;
    }
    void optimal()
    {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
    Time Addition(Time T)
    {
        cout<<"ADDITION OF TWO";
        Time temp;
        temp.h=h+T.h;
        temp.m=m+T.m;
        temp.s=s+T.s;
        return temp;
    }
    Time Subtraction(Time T)
    {
        cout<<"SUBTRACTION OF TWO ";
        Time temp;
        temp.h=h-T.h;
        temp.m=m-T.m;
        temp.s=s-T.s;
        return temp;
    }

};
int main()
{
    Time t1,t2,t3;
    t1.setTime(16,3,61);
    t1.showTime();
   // t1.optimal();
    t2.setTime(16,12,1);
    t2.showTime();
   // t2.optimal();
    t3=t1.Addition(t2);
    t3.optimal();
    t3.showTime();
    t3=t1.Subtraction(t2);
    t3.optimal();
    t3.showTime();

    return 0;
}
