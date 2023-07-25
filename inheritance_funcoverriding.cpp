#include<iostream>
using namespace std;
int a,b,c;

class calculator
{
	public :
		void display()
		{
		cout<<"Enter two or three number : "<<endl;
		cin>>a>>b>>c;
		}
		void add(int a,int b) //( using virtual in base class function compler override this function with derived class.
		{
			cout<<"Addition is "<<a+b<<endl;
		}
		void sub(int a,int b)
		{
			cout<<"Subtraction is "<<a-b<<endl;
		}
		void mul(int a,int b)
		{
			cout<<"Multiplication is "<<a*b<<endl;
		}
		void div(int a,int b)
		{
			cout<<"Division is "<<a/b<<endl;
		}
		void modulo(int a,int b)
		{
			cout<<"Remainder is "<<a%b<<endl;
		}
};

class advancecalculator : public calculator
{
	public :
		using  calculator::add;  // use of these will call base class function.
		void add(int a,int b,int c)
		{
			cout<<"Addition is : "<<a+b+c<<endl;
		}
		using  calculator::sub;
		void sub(int a,int b,int c)
		{
			cout<<"Subtraction is : "<<a-b-c<<endl;
		}
		using  calculator::mul;
		void mul(int a,int b,int c)
		{
			cout<<"Multiplication is : "<<a*b*c<<endl;
		}
		using  calculator::div;
		void div(int a,int b,int c)
		{
			cout<<"Division is :"<<a/b/c<<endl;
		}
		using  calculator::modulo;
		void modulo(int a,int b,int c)
		{
			cout<<"Remainder is :"<<(a%b)%c<<endl;
		}
		
};

int main()
{
	advancecalculator cal;
	cal.add(1,2,3);
	cal.sub(4,2);
	cal.mul(2,20);
	cal.div(20,5);
	cal.modulo(16,3,1);
}