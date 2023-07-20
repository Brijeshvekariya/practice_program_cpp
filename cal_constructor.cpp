#include<iostream>
using namespace std;

class calculator
{
	public :
		calculator(int a,int b)
		{
			cout<<"\n\nAddition of "<<a<<" and "<<b<<" is : "<<a+b<<endl;;
			cout<<"\n\nSubtraction of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
			cout<<"\n\nMultiplication of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
			cout<<"\n\nDivision of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
			cout<<"\n\nModulo/Remiander of "<<a<<" and "<<b<<" is : "<<a%b<<endl;
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
	calculator c1(a,b);
}