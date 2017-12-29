#include <iostream>
#include <fstream>
using namespace std;
class student
{
    int age;
    char name[10];
public:
    void accept()
    {
        cout<<"\n enter the age";
        cin>>age;
        cout<<"\n enter the name";
        cin>>name;
    }
    void disp()
    {
        cout<<"\n"<<age<<"\t"<<name;
    }
};
int main()
{
    student stu;
    fstream fst;
    fst.open("student.dat",ios::out);
    int n;
    cout<<"enter the number of student"<<endl;
    cin>>n;
    while(n>0)
    {
        stu.accept();
        fst.write((char*)&stu,sizeof(stu));
        n--;
    }
    int fsize=fst.tellp();
    cout<<"\n size of file= "<<fsize;
    cout<<"\n size of rec= "<<sizeof(stu);
    cout<<"\n no of rec= "<<fsize/sizeof(stu);
    fst.close();
    fst.open("student.dat",ios::in);
    fst.read((char*)&stu,sizeof(stu));
    while(fst)
    {
        stu.disp();
        fst.read((char*)&stu,sizeof(stu));
    }
    fst.close();
    return 0;
}
