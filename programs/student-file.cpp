#include<fstream>
#include<iostream>
using namespace std;

class student
{
	char stuname[10];
	int age;
	public:
	void accept()
	{
		cout<<"\n sudent name & age";
		cin>>stuname>>age;
	}
	void disp()
	{
		cout<<"\n"<<stuname<<"\t"<<age;
	}
};
int main()
{
	fstream fst;
	student stu;
	int n;
	fst.open("students.dat",ios::out);
	cout<<"\n enter no of students :";
	cin>>n;
	while(n>0)
	{
		stu.accept();
		fst.write((char*)&stu,sizeof(stu));
		n--;
	}
	int fsize=fst.tellp();
	cout<<"\n File size = "<<fsize;
	cout<<"\n rec size = "<<sizeof(stu);
	cout<<"\n Noof rec = "<<fsize/sizeof(stu);
	fst.close();
	fst.open("students.dat",ios::in);
	fst.read((char*)&stu,sizeof(stu));
	while(fst)
	{
		stu.disp();
		fst.read((char*)&stu,sizeof(stu));
	}
	fst.close();
	return 0;
}

