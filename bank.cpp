#include<iostream>
using namespace std;
class bank
{
	char name[10];
	int accno,amt,bal;
	public:
		bank()
		{
			bal=500;
			cout<<"enter name:\n";
			cin>>name;
			cout<<"enter account no:\n";
			cin>>accno;
			cout<<"enter amount\n";
			cin>>amt;
		}
		void deposit()
		{
			bal+=amt;
		}
	
		int getbal()
		{
			return bal;
		}
};
int main()
{
	bank a;
	a.deposit();
	
	cout<<"balance:"<<a.getbal();
}