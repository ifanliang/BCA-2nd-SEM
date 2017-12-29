#include <iostream>
#include<cstring>
using namespace std;

int main()
{
    char ch[5];
    int i,j,k;
    cin>>ch;
    k=strlen(ch);
    cout<<k;
    for(i=0;i<k;i++)
    {
    for(j=0;j<i;j++)
    {
        cout<<ch[j];
    }
    cout<<endl;
}
    for(i=k;i>0;i--)
    {
    for(j=0;j<i;j++)
    {
    cout<<ch[j];
    }
    cout<<endl;
}
    return 0;
}
