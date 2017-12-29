#include <iostream>
using namespace std;
class db;
class dm
{
    double cm,m;
public:
    void accept();
    void display();
    friend void add(dm,db);
};
class db
{
    int f;
    float inches;
public:
    void accept();
    void display();
    friend void add(dm,db);
};
void dm::accept()
{
    cout<<"\n enter the distance in meter";
    cin>>m;
    cout<<"\n enter the distance in cm";
    cin>>cm;
}
void dm::display()
{
    cout<<"\n distance in meter:"<<m;
    cout<<"\n distance in cm:"<<cm;
}
void db::accept()
{
    cout<<"\n enter the distance in feet";
    cin>>f;
    cout<<"\n enter the distance in inches";
    cin>>inches;
}
void db::display()
{
    cout<<"\n distance in feet:"<<f;
    cout<<"\n distance in inches:"<<inches;
}
void add(dm a,db b)
{
    double x,y,z;
    x=a.m+a.cm/100;
    cout<<"\n\n total of dm="<<x<<"meter";
    y=b.inches/12+b.f;
    y=y/3.280;
    cout<<"\n\n total of db="<<y<<"meter";
    z=x+y;
    cout<<"\n\n total distance:=="<<z<<"meter";
}
int main()
{
    dm a;
    a.accept();
    db b;
    b.accept();
    a.display();
    b.display();
    add(a,b);
    return 0;
}
