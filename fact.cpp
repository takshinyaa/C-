#include<iostream>
using namespace std;
int factorial(int i);
int main()
{
	int i,fact=1,n;
	cout<<"enter the num";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<"factorial of "<<n<<"="<<fact;
}