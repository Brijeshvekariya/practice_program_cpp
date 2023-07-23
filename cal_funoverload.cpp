
#include<iostream>
using namespace std;
int a,b,c;

class calculator
{
	public :
		void display()
		{
		cout<<"Enter two or three number(If you want to use two numbers only then make third number = 0): "<<endl;
		cout<<"First number : ";
		cin>>a;
		cout<<"Second number : ";
		cin>>b;
		cout<<"Third number : ";
		cin>>c;
		}
		void add(int a,int b)
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
		using  calculator::add;
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
	cal.display();
	cout<<endl<<endl;
	if(c == 0)
	{
	cal.add(a,b);
	cal.sub(a,b);
	cal.mul(a,b);
	cal.div(a,b);
	cal.modulo(a,b);
	}
	else
	{
		cal.add(a,b,c);
		cal.sub(a,b,c);
		cal.mul(a,b,c);
		cal.div(a,b,c);
		cal.modulo(a,b,c);
	}
}