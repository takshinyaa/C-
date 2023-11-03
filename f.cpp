#include<iostream>
using namespace std;
class copy
{
	private:
		int x,n,sum;
	public:
		copy(int a,int b)
		{
			x=a;
			n=b;
		}
double calculate()
{
	int nxt,sum=0;
	nxt=x;
	for(int i=1;i<=n;i++)
	{
		sum=sum+nxt;
		nxt=nxt*x;
	}
	return sum;
}
};
int main()
{
	int x,n;
	cout<<"enter the value of x and n";
	cin>>x>>n;
	copy obj(x,n);
	copy cpy=obj;
	cout<<"fibo :"<<cpy.calculate();	
}