#include<iostream>
using namespace std;

inline void mul(int a,int b)
{
	cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
	cout<<"The cube of "<<a<<" is : "<<a*a*a<<endl;
	cout<<"The cube of "<<b<<" is : "<<b*b*b<<endl;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers for multiplication and its cube : "<<endl;
	cin>>a>>b;
	mul(a,b);
}