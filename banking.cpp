#include<iostream>
using namespace std;
class bank
{
	public:
		char name[10];
		int accno;
		void getdata()
		{
			cout<<"enter name:\n";
			cin>>name;
			cout<<"enter the accno:\n";
			cin>>accno;
		}
};
class info
{
	public:
		char addr[10];
		void get()
		{
			cout<<"enter address:\n";
			cin>>addr;
		}
		
};
class store :public bank,public info
{
	public:
		int gpno,ppno;
		void getm()
		{
			cout<<"Enter gpay no:\n";
			cin>>gpno;
			cout<<"Enter phonepay no:\n";
			cin>>ppno;	
		}
		void display()
		{
			cout<<"Name:"<<name<<"Accno:"<<accno<<"Address:"<<addr<<"gpayno:"<<gpno<<"phonepayno:"<<ppno;
		}
};
int main()
{
	store a;
	a.getdata();
	a.getm();
	a.display();
}