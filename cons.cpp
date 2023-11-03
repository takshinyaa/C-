#include<iostream>
using namespace std;
class example
{
	int a,b;
	public:
	example()
	{
		a=50;
		b=100;
		cout<<"Iam a constructor\n";
	}
	example(int x,int y)
	{
	a=x;
	b=y;
	cout<<"Iam a constructor\n";	
	}
	void display()
	{
		cout<<"values:"<<a<<b;
	}
};
int main()
{
	example ob1(10,20)
	example ob2;
	ob1.display();
	ob2.display();
}