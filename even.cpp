#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"enter the value ofa\n";
	cin>>a;
	if(a>=2&&a%2==0)
	{
		cout<<"the given number"<<a<<"is even\n";
	}
	else if(a==0)
	{
		cout<<"the given number is"<<a;
	}
	else
	{
		cout<<"the given number"<<a<<"is odd\n";
	}
}