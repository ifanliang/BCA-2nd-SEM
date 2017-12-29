#include <iostream>
using namespace std;
struct bill
{
    char name[10];
    int q;
    float p,amt;
}b[10];
int main()
{
    int i,n,t=0;
    cout << "enter the number of item";
    cin >>n;
    for(i=0;i<n;i++)
    {
    cout <<"\n enter the quantity,name and price";
    cin >>b[i].q>>b[i].name>>b[i].p;
    b[i].amt=b[i].q*b[i].p;
    t+=b[i].amt;
    }
     cout <<"\n*************BILL*******************\n";
    cout <<"\n item \t quantity \t price \t amount\n";
    for(i=0;i<n;i++)
    {
    cout <<b[i].name<<"\t"<<b[i].q<<"\t"<<"\t"<<b[i].p<<"\t"<<b[i].amt<<"\n";
    }
    cout<<"total amount="<<t;
    return 0;
}
