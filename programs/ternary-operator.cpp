#include <iostream>

using namespace std;
int main()
{
    int i,a[5],MAX;
    cout << "enter the number";
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<10;i++)
    {
        MAX=((a[i]>a[i+1])?a[i]:a[i+1]);
    }
    cout<<"largest number is="<<MAX;
    return 0;
}
