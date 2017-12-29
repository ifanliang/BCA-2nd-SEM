#include <iostream>

using namespace std;

int main()
{
    char ch='Y';
    int i,j;
    for(i=0;i<=4;i++)
    {
        if(i==0)
        {
            for(j=0;j<=4;j++)
            {
                if(j==0|j==4)
                {
                    cout<<ch;
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    if(i==1)
       {
           for(j=0;j<4;j++)
            {
                if(j==1|j==3)
                {
                    cout<<ch;
                }
                else
                {
                    cout<<" ";
                }
            }
            cout<<endl;
       }
    if(i==2|i==3|i==4)
    {
    for(j=0;j<=2;j++)
    {
    if(j==2)
    {
        cout<<ch;
    }
    else
        cout<<" ";
    }
    cout<<endl;
    }
    }
    return 0;
}
