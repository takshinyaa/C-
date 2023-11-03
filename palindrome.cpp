#include<iostream>
using namespace std;
int main()
{
	int n,rem,rev=0,org;	
	cout<<"enter a no\n";
	cin>>n;
	org=n;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	if(org==rev)
	{
		cout<<"number is palindrome";
	}
	else
	{
		cout<<"number is not palindrome";
	}
}