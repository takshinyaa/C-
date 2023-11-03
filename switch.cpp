#include<iostream>
using namespace std;
int main()
{
	int a,b,c,ch;
	cout<<"enter the value of a and b\n";
	cin>>a>>b;
	cout<<"enter your choice\n";
	cin>>ch;
	switch(ch)
	{
		case 1: c=a+b;
		cout<<"c="<<c;
		break;
		
		case 2: c=a*b;
		cout<<"c="<<c;
		break;
		
		case 3: c=a-b;
		cout<<"c="<<c;
		break;
		default:
			cout<<"none of the above";
		
	}
}