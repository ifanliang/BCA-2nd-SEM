#include <iostream>

using namespace std;

int main()
{
    int i,j,n;
    cout << "enter the number";
    cin>>n;
    for(i=-8;i<0;i++)
    {
        if(i==-8||i==-5)
        {
            j=i+3;
            cout<<j<<",";
        }
        else
        {

        }
    }
    for(i=0;i<n;i++)
    {
        j=i*3;
        cout<<j<<",";
    }
    return 0;
}
