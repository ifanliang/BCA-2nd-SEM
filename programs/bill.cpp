#include <iostream>
#define HRA 0.1
#define TA 0.05
using namespace std;

int main()
{
    float bp,s;
    cout << "enter the basic pay";
    cin >>bp;
    s=bp+(bp*HRA)+(bp*TA);
    cout <<"salary="<<s;
    return 0;
}
