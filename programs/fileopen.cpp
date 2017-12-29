#include<fstream>
#include<iostream>

using namespace std;
int main()
{
	fstream fst;
	char ch;
	fst.open("poem.txt",ios::out);
	cout<<"\n Enter a poetry :";
	cin>>ch;
	do
	{
		fst.put(ch);
		ch=cin.get();
	}while(ch!='0');
	fst.close();
	fst.open("poem.txt",ios::in);
	cout<<"\n Poetry :";
	ch=fst.get();
	while(!fst.eof())
	{
		cout<<ch;
		ch=fst.get();
	}
	fst.close();
return 0;
}
