#include <iostream>

using namespace std;
class student
{
    int roll_no,m,m1,m2;
    float tot,per;
    char name[20];
public:
    void accept()
    {
        cout<<"\n enter the roll no";
        cin>>roll_no;
        cout<<"\n enter the name";
        cin>>name;
        cout<<"\n enter the marks of maths";
        cin>>m;
        cout<<"\n enter the marks of english";
        cin>>m1;
        cout<<"\n enter the marks of computer";
        cin>>m2;
        tot=m+m1+m2;
        per=tot/3;
    }
    void disp()
    {
        cout<<"\n"<<roll_no<<"\t"<<name<<"\t"<<m<<"\t"<<m1<<"\t"<<m2<<"\t"<<tot<<"\t"<<per<<"%";
    }
};
int main()
{
    student stu[20];
    int i,n;
    cout<<"\n enter the number of student";
    cin>>n;
    for(i=0;i<n;i++)
    {
        stu[i].accept();
    }
    cout<<endl;
    cout<<"\nroll no\tname\tmaths\tenglish\tcomputer total\tpercentage";
    for(i=0;i<n;i++)
    {
        stu[i].disp();
        cout<<"\n";
    }
    return 0;
}
