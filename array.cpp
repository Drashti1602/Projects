#include<iostream>
using namespace std;
class Array
{
private:
    int a[10];
public:
    int i,j;
    void inputArrayOfElement(int c[])
    {
        for(i=0;i<10;i++)
        a[i]=c[i];
    }
    void Display()
    {
        cout<<"ARRAY ELEMENT:"<<endl;
        for(i=0;i<10;i++)
            cout<<a[i]<<endl;
    }
    void  MaxElement()
    {
        int Max=a[0];
        for(i=0;i<10;i++)
        {
            for(j=1;j<10;j++)
              {
                if(a[i]<=a[j])
                {
                    Max=a[j];
                }
               }
            }
              cout<<"MAXIMUM ELEMENT = "<<Max<<endl;
       }
    void  MinElement()
    {
        int Min=a[0];
        for(i=0;i<10;i++)
        {
            for(j=1;j<10;j++)
              {
                if(a[i]>=a[j])
                {
                    Min=a[j];
                }
               }
              cout<<"MANIMUM ELEMENT = "<<Min<<endl;
              break;
        }
    }
    void Sort()
    {
        int s[10];
        for(i=0;i<10;i++)
            s[i]=a[i];
            cout<<"SORT ARRAY ELEMENT:"<<endl;
            for(i=0;i<10;i++)
            {
               for(j=i+1;j<10;j++)
               {
                   if(s[i]>=s[j])
                   {
                       int temp;
                       temp=s[j];
                       s[j]=s[i];
                       s[i]=temp;
                   }
               }
               cout<<s[i]<<endl;
            }
            cout<<" ";
    }
    void Display(int d[])
    {
        cout<<"DISPLAY ARRAY ELEENT:";
        for(i=0;i<10;i++)
        cout<<d[i]<<endl;
    }
    void EditElement(int index,int Newdata)
    {
        a[index]=Newdata;
    }
    void SumOfElement()
    {
        int s=0;
        for(i=0;i<10;i++)
            s=s+a[i];
        cout<<"SUM OF ARRAY ELEMENT = "<<s;
    }
    void AverageOfElement()
    {
        float ave,s=0;
        for(i=0;i<10;i++)
            s=s+a[i];
            ave=s/10;
            cout<<"AVERAGE OF ARRAY ELEMENT = "<<ave<<endl;
    }

};
int main()
{
    Array a1;
    int x[10]={1,2,3,4,5,6,7,8,9,10};
    a1.inputArrayOfElement(x);
    a1.Display();
    a1.MaxElement();
    a1.MinElement();
    a1.Sort();
    a1.Display();
    a1.EditElement(2,6);
    a1.Display();
    //a1.EditElement();
    a1.SumOfElement();
    a1.AverageOfElement();
    return 0;
}
