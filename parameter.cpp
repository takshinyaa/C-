#include<iostream>
using namespace std;
class example
{
	int a,b;
	public:
		example(int x,int y)
		{
			a=x;
			b=y;
			cout<<"im a constructor\n";
		}
		void display()
		{
			cout<<"values:"<<a<<b;
		}
};
int main()
{
	example(10,20);
	example ob();
	ob.display();
	
}