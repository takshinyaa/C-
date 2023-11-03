#include<iostream>
using namespace std;
class mm
{
	protected:
		int rollno;
		public:
			void getnum(int a)
			{
				rollno=a;
			}
			void putnum()
			{
				cout<<"rollno:"<<rollno;
			}
};
class marsks: public mm
{
	protected:
		int sub1,sub2;
		public:
			void getmarks(int x,int y)
			{
				sub1=x;
				sub2=y;
			}
			void putmarks()
			{
				cout<<"sub1:"<<sub1;
				cout<<"sub2:"<<sub2;
			}
};
class res:public marks
{
	protected:
		void disp(void)
		{
			tot=sub1+sub2;
			putnum();
			putmarks();
			cout<<"total:"<<tot;
		}
};
int main()
{
	
}