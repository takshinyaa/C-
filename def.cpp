#include<iostream>
using namespace std;
class example
{
	int a,b;
	public:
		example()
		{
			a=10;
			b=20;
			cout<<"im a constructor\n";
		}
		void display()
		{
			cout<<"values:"<<a<<b;
		}
};
int main()
{
	
	example obj();
	obj.display();
	
}