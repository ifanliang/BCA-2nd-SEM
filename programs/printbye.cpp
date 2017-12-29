#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "BBB" <<setw(4)<<setfill(' ')<<"Y"<<setw(4)<<setfill(' ')<<"Y"<<setw(5)<<setfill(' ')<<"EEE"<<endl;
    cout<<"B"<<setw(3)<<setfill(' ')<<"B"<<setw(4)<<setfill(' ')<<"Y"<<setw(2)<<setfill(' ')<<"Y"<<setw(4)<<setfill(' ')<<"E"<<endl;
    cout<<"BBB"<<setw(6)<<setfill(' ')<<"Y"<<setw(7)<<setfill(' ')<<"EEE"<<endl;
    cout<<"B"<<setw(3)<<setfill(' ')<<"B"<<setw(5)<<setfill(' ')<<"Y"<<setw(5)<<setfill(' ')<<"E"<<endl;
    cout<<"BBB"<<setw(6)<<setfill(' ')<<"Y"<<setw(7)<<setfill(' ')<<"EEE"<<endl;
    return 0;
}
