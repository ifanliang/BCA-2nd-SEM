#include <iostream>
using namespace std;
class str
{
public:
    char a[];
    void dis()
    {
        cout<<"\nenter any String : ";
        cin>>a;
    }
    void check()
    {
    char c;
    int i=0,j=0;
    while(a[i])
    {
     c=a[i];
        if(islower(c))
        {
           j++;
        }
        i++;
    }
    cout<<"\n number of lower-case character ="<< j;
}
void check2()
{
    char c;
    int i=0,j=0,k=0;
    while(a[i])
    {
        c=a[i];
         if(islower(c))
        {
           c=toupper(c);
        }
        if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
         {
            j++;
        }
        else
        {
            k++;
        }
        i++;
    }
    cout<<"\n total times vowel used = "<<j;
    cout<<"\n number of consonant ="<<k;
}
};
int main()
{
    str a;
    a.dis();
    a.check();
    a.check2();
    return 0;
}
