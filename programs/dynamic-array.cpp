#include <iostream>

using namespace std;
class arrays
{
public:

    int *arr;
    int n;
    arrays()
    {
        int i;
        cin>>n;
        arr=new int[n];
        cout<<"\n enter the array element";
       for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
    }
void check()
{
    int flag=0;
    int i,j,k=0,l=0;
     for(i=0;i<n;i++)
    {
            if(arr[i]==1)
            {

            }
            else
            {
            for(j=2;j<=arr[i]/2;j++)
            {
                if(arr[i]%j==0)
                {
                   flag=1;
                   break;
                }
                else
                {
                   flag=0;
                    break;
                }
            }

            if(flag==0)
            {
                k++;
            }
            else
            {
                l++;
            }
        }
        }
    cout<<"\n prime number="<<k;
     cout<<"\n composite number="<<l;
}
};
int main()
{
    arrays a;
    a.check();

    return 0;
}
