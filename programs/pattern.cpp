#include <iostream>

using namespace std;

int main()
{
    int i,j;
    for(i=0;i<5;i++)
    {
        if(i==0||i==4)
        {
        for(j=0;j<3;j++)
        {
            if(j==0)
            {
                cout<<"$";
            }
            cout<<"*";
        }
        for(j=0;j<5;j++)
        {
            if(j==4)
            {
                cout<<"$";
            }
        }
        cout<<endl;
        }
        if(i==1||i==3)
        {
            for(j=0;j<5;j++)
            {
                if(j==0||j==4)
                cout<<"*";
                if(j==1||j==3)
                cout<<"$";
                if(j==2)
                cout<<" ";
            }
            cout<<endl;
        }
          if(i==2)
        {
            for(j=0;j<5;j++)
            {
                 if(j==0||j==4)
                    cout<<"*";
                if(j==2)
                    cout<<"$";
                if(j==1||j==3)
                    cout<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
