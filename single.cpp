#include<iostream>
using namespace std;
class triangle
{
	public:
		int l,b;
		void get()
		{
			cout<<"enter l";
			cin>>l;
			cout<<"enter b";
			cin>>b;
		}
};
class area:public triangle
{
	public:
		int a;
		void calculate()
		{
			a=l*b;
		}
		void display()
		{
			cout<<"area:"<<a;
			
		}
};
int main()
{
	area z;
	z.get();
	z.calculate();
	z.display();
}