#include<iostream>
using namespace std;
class Box
{
private:
    int l,b,h;
public:
    void setdaimention(int x,int y,int z)
    {
        l=x;
        b=y;
        h=z;
    }
    void displaydaimention()
    {
      //  cout<<"VOLUME OF BOX = "<<;
    }
    int xyz (Box B)
    {
        int volume;
        volume=l*b*h;
        return volume;
    }
};
int main()
{
    Box b1,b2;
    b1. setdaimention(2,6,3);
    int vol=b1.xyz(b1);
    cout<<vol;
    b1.displaydaimention();
    return 0;
}
