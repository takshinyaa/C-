#include<iostream>
using namespace std;
class hms
{
	public:
		char name[10];
		int id;
		void getdata()
		{
			cout<<"enter name:\n";
			cin>>name;
			cout<<"enter id:\n";
			cin>>id;
		}
};
class info:public hms
{
	public:
	char dis[10];
	void get()
	{
		cout<<"Enter disease\n";
		cin>>dis;
	}
	void display()
	{
		cout<<"Name:"<<name<<"Id:"<<id<<"Disease:"<<dis;
	}
};
int main()
{
	info a;
	a.getdata();
	a.get();
	a.display();
}