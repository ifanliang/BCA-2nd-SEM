#include <iostream>

using namespace std;

int main()
{
    int i,n,j;
    cout<<"\n enter the size of the series";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        j=i*i*i;
        cout<<j<<",";
    }
    return 0;
}
