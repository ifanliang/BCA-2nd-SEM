#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char ch='B',ch1='E',ch2='Y';
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
                for(j=0;j<=3;j++)
                {
                    if(j==0|j==3)
                    {
                      cout<<ch;
                    }
                    else
                    {
                        cout<<" ";
                    }
                }
            }
        cout<<endl;
    }
      for(i=0;i<=4;i++)
    {
        if(i==0)
        {
            for(j=0;j<=4;j++)
            {
                if(j==0|j==4)
                {
                    cout<<ch2;
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
                    cout<<ch2;
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
        cout<<ch2;
    }
    else
        cout<<" ";
    }
    cout<<endl;
    }
    }
    for(i=0;i<=4;i++)
    {
        if(i==0|i==2|i==4)
        {
        for(j=0;j<=2;j++)
        {
            cout<<ch1;
        }
        }
        if(i==1|i==3)
        {
        for(j=0;j==0;j++)
        {
            cout<<ch1;
        }
        }
        cout<<endl;
    }

       return 0;
}
