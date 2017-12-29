#include <iostream>

using namespace std;

int main()
{
    int a=0,i,b=1,c;
    cout<<"fabonacci series ="<<a <<"  "  <<b;
    for(i=0;i<=10;i++)
    {
        c=a+b;
        a=b;
        b=c;
        cout<<"  " <<c;
    }
    return 0;
}
