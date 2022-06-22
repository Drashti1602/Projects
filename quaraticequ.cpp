#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"ENTER THE THREE NUMBER"<<endl;
    cin>>a>>b>>c;
    if(b*b-4*a*c>0)
        cout<<"REAL ROOTS AND DISTING ROOTS";
    if(b*b-4*a*c<0)
        cout<<"IMAGENERY ROOTS";
    if(b*b-4*a*c>0)
        cout<<"REAL ROOTS";
    return 0;

}
