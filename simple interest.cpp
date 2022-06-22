#include<iostream>
using namespace std;
main()
{
    float time,rate,amount,simpleinterest;
    cout<<"ENTER THE VALUE OF TIME,RATE,AND AMOUNT";
    cin>>time>>rate>>amount;
    cout<<"TIME="<<time<<endl<<"RATE="<<rate<<endl<<"AMOUNT="<<amount<<endl;
    simpleinterest=time*rate*amount/100;
    cout<<"SIMPLE INTERST OF GIVEN TIME RATE AND AMOUNT ="<<simpleinterest;
    return 0;

}
