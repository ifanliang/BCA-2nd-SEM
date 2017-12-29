#include <iostream>

using namespace std;

int main()
{
    int a,e,f;
    cout<<"\n enter the value";
    cin>>f;
    for(a=1;a<10;a++)
    {
        cin>>e;
        f=(e>f?e:f);
    }
    cout<<"\n largest no.="<<f;
    return 0;
}
