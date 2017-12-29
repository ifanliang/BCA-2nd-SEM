#include <iostream>

using namespace std;
class bill
{
    char name[10];
    int qty,p,code;
    float a;
public:
         bill()
    {
        code=0;
        p=0;
        qty=0;
        a=0.0;
        cout<<"\n constructor";
    }
    void accept()
    {
        cout<<"\n enter the code,qty & price of the item";
        cin>>code>>qty>>p;
        cout<<"\n enter the name of the item";
        cin>>name;
        a=p*qty;
    }
    void disp()
    {
        cout<<"\n"<<code<<"\t"<<name<<"\t"<<qty<<"\t"<<p<<"\t"<<a;
    }
    friend void total(int n);
}b[5];
void total(int n)
{
    float tot=0;
    int i;
    for(i=0;i<n;i++)
    {
        tot+=b[i].a;
    }
    cout<<"\n \t total "<<tot;
}
int main()
{
    int n,i;
    cout<<"\n enter the no of items";
    cin>>n;
    for(i=0;i<n;i++)
    {
        b[i].accept();
    }
    cout<<"\n---BILL---\ncode\tname\tqty\tprice\ttotal";
    for(i=0;i<n;i++)
    {
        b[i].disp();
    }
    total(n);
    return 0;
}
