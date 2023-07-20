#include<iostream>
using namespace std;

class calculator
{
	public :
		void add(int a,int b)
		{
			cout<<"\n\nAddition of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
		}
		void sub(int a,int b)
		{
			cout<<"Subtraction of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
		}
		void mul(int a,int b)
		{
			cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
		}
		void div(int a,int b)
		{
			cout<<"Division of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
		}
		void mod(int a,int b)
		{
			cout<<"Modulo/Remainder of "<<a<<" and "<<b<<" is : "<<a%b<<endl;
		}
};

int main()
{
	int a,b;
	cout<<"Welcome to Calculator"<<endl;
	cout<<"\n\nEnter first number : ";
	cin>>a;
	cout<<"Enter Second number : ";
	cin>>b;
	calculator c;
	c.add(a,b);
	c.sub(a,b);
	c.mul(a,b);
	c.div(a,b);
	c.mod(a,b);
}