#include <iostream>

using namespace std;

int main()
{
    char fn[10];
    int ctr=0,i;
    cout << "enter the text" << endl;
    cin.getline(fn,10);
    for(i=0;i<=10;i++)
    {
        if(fn[i]=='a'||fn[i]=='e'||fn[i]=='i'||fn[i]=='o'||fn[i]=='u')
        {
            ctr++;
        }
    }
        cout<<"\n number of vowel="<<ctr;
    return 0;
}
