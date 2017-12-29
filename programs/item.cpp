#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fst;
    fst.open("item.txt",ios::out);
    int n,qty;
    char name[10];
    cout << "enter the number of items" << endl;
    cin>>n;
    while(n>0)
    {
        cout<<"\n enter the qty & name";
        cin>>qty>>name;
        fst<<qty<<"\t"<<name<<"\n";
        n--;
    }
    fst.close();
    fst.open("item.txt",ios::in);
    while(fst)
    {
        fst>>qty;
        cout<<qty<<"\t";
        fst>>name;
        cout<<name<<"\n";
    }
    cout<<"\n end of file";
    fst.close();
    return 0;
}
