#include <iostream>

using namespace std;

int main()
{
    char ch='E';
    int i,j;
    for(i=0;i<=4;i++)
    {
        if(i==0|i==2|i==4)
        {
        for(j=0;j<=2;j++)
        {
            cout<<ch;
        }
        }
        if(i==1|i==3)
        {
        for(j=0;j==0;j++)
        {
            cout<<ch;
        }
        }
        cout<<endl;
    }
    return 0;
}
