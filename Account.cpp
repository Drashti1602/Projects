#include<iostream>
using namespace std;
class Account
{
private:
    float account_no,blance,time,rate;
    static float rateofintrest;

public:
    void setblance(float x)
    {
        blance=x;
    }
    void setAccountNo(float y)
    {
        account_no=y;
    }
    float getBlance()
    {
        cout<<"BLANCE = "<<blance<<endl;
    }
    float getAccount_No()
    {
        cout<<"ACCOUNT_NO = "<<account_no<<endl;
    }
     void setrateofintrest(float m)
    {
       rateofintrest=m;
    }
     float getrateofintrest()
    {
       cout<<"RATE OF INTREST = "<<rateofintrest<<endl;
    }
};

float Account::rateofintrest;
int main()
{
    Account a1,a2;
    a1.setblance(1250);
    a1.setAccountNo(12345);
    a1.setrateofintrest(5.6f);
    a1.getBlance();
    a1.getAccount_No();
    a1.getrateofintrest();
    a2.getrateofintrest();
    a1.setrateofintrest(7.8f);
    a2.getrateofintrest();
    a1.getrateofintrest();


    return 0;
}
