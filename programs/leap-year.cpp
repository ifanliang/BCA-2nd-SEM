#include <iostream>

using namespace std;

int main()
{
    int i;
    for(i=2000;i<=2100;i++)
    {
        if((i%400==0)||((i%4==0)&&(i%100!=0)))
        {
            cout<<"\n leap year="<<i;
        }
    }
    return 0;
}
