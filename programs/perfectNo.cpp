#include <iostream>
using namespace std;

int main()
{
    int i,f,j;
    for(i=1;i<=100;i++)
    {
        f=0,j=1;
        while(j<i)
        {
            if(i%j==0)
            {
                f=f+j;
            }
        j=j+1;
        }
    if(f==j)
    {
        cout << "\n perfect number is= "<<j<<endl;
    }
    }
    return 0;
}
