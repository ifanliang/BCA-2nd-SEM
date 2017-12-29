#include <iostream>
using namespace std;
class DM
{

public:
     double i,j,k;
    void accept()
    {
        cout<<"--enter length between AB--";
        cout<<"\n enter the value in meter";
        cin>>i;
        cout<<"\n enter the value in cm";
        cin>>j;
    }

    void cal()
    {
        j=j/100;
        k=i+j;
    }
     void disp()
    {
        cout<<"\n length between AB="<<k<<" meter";
    }

};
class DB
{

public:
    double i,j,k;
    void accept()
    {
        cout<<"\n\n--enter length between BC--";
        cout<<"\n\n enter the value in feet";
        cin>>i;
        cout<<"\n enter the value in inches";
        cin>>j;
    }

    void cal()
    {
        j=j/12;
        k=i+j;
        k=k/3.280;
    }
     void disp()
    {
        cout<<"\n length between BC="<<k<<" meter";
    }

};
int main()
{
    double l;
 DM a;
 DB b;
 a.accept();
 a.cal();
 a.disp();
 b.accept();
 b.cal();
 b.disp();
 l=a.k+b.k;
 cout<<"\n\n--- total length between AC="<<l<<" meter\n";
    return 0;
}
