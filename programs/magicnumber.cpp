#include <iostream>

using namespace std;

int main()
{
        int num,n1,f=0,n,s=0,x=0;
        cout<<"enter any no.";
        cin>>num;
        n1=num;
        while(f==0)
        {
        while(num!=0)
        {
            n=num%10;
            s=s+n;
            num=num/10;
            x=x+1;
        }
        if (x==1)
        {
        if (s==1)
            cout<<n1<<" is a magic number";
        else
            cout<<n1<<" is not a magic number";
            f=1;}
            num=s;
            s=0;
            x=0;
        }
    return 0;
}
