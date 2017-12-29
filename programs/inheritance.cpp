#include <iostream>

using namespace std;
class person
{
    char name[10],add[20],contact[10];
    int age;
public:
    void accept()
    {
        cout<<"\n enter the name,address,contact& age";
        cin>>name>>add>>contact>>age;
    }
    void dis()
    {
        cout<<"name: "<<name<<"\n address: "<<add<<"\n contact: "<<contact<<"\n age: "<<age;
    }
};
class teacher:public person
{
    char qual[10];
public:
    void accept()
    {
        person::accept();
        cout<<"\n enter the qualification";
        cin>>qual;
    }
    void dis()
    {
        person::dis();
        cout<<"\n qualification: "<<qual;
    }
};
class student:public person
{
    char stream[10];
public:
    void accept()
    {
        person::accept();
        cout<<"\n enter the stream";
        cin>>stream;
    }
    void dis()
    {
        person::dis();
        cout<<"\n stream: "<<stream;
    }
};
int main()
{
    int c;
    teacher a;
    student b;
    while(c)
    {
        cout<<"\n 1.teacher accept";
        cout<<"\n 2.teacher dis";
        cout<<"\n 3.student accept";
        cout<<"\n 4.student dis";
        cout<<"\n 5.exit";
        cout<<"\n enter the choice";
        cin>>c;
        switch(c)
        {
        case 1:
            a.accept();
            break;
        case 2:
            a.dis();
            break;
        case 3:
            b.accept();
            break;
        case 4:
            b.dis();
            break;
        case 5:
            c=0;
            break;

        }
    }
    return 0;
}
