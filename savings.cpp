#include<iostream>
using namespace std;
class savings
{
	public:
		char name[10],contact[10];
		void data()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter contact:";
			cin>>contact;
		}
};
class info
{
	public:
		int payment;
		void get()
		{
			cout<<"Enter the amount to be paid:";
			cin>>payment;
		}
};
class total: public savings,public info
{
	public:
		int amt;
		void calculate()
		{
			amt=payment*12;
			cout<<"final amount to be received:"<<amt;
		}
		void display()
		{
			cout<<"Name:"<<name<<"Contact:"<<contact<<"Amount:"<<amt;
		}
};
int main()
{
	total a;
	a.data();
	a.get();
	a.calculate();
	a.display();
}