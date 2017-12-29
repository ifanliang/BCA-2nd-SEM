#include <iostream>

using namespace std;
class mstr
{
public:
   string str,str1;
    void accept()
    {
        cin>>str;
    }
    void accept1()
    {
        cin>>str1;
    }
    void disp()
    {
        cout<<"\n"<<str;
        cout<<str1;
    }
     mstr operator+(mstr x)
    {
        mstr temp;
        temp.str=str+x.str1;
        temp.str1=str1+x.str;
        return temp;
    }
};
int main()
{
    mstr a,b,c;
    a.accept();
    b.accept1();
    c=a+b;
    c.disp();
    return 0;
}
