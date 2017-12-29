#include <iostream>

using namespace std;

int main()
{
    int i=1,n;
    cout << "enter the number" << endl;
    cin>>n;
    cout<<i<<",";
    cout<<1<<"+"<<i+1<<",";
    for(i=2;i<n;i++)
    {
        cout<<1<<"+"<<i<<"+"<<1+i<<",";
    }
    return 0;
}
