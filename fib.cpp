#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,c=0,n;
cout<<"enter n:\n";
cin>>n;
cout<<"fibo:\n"<<a<<b;
c=a+b;
while(c<=n)
{
	cout<<"\n"<<c;
	a=b;
	b=c;
	c=a+b;
}
}