#include<iostream>
using namespace std;

template < class obj>
obj swap(obj &num1,obj &num2)
{
	num1+=num2;
	num2 = num1-num2;
	num1-=num2;
	cout<<"After Swaping two number, First is : "<<num1<<" and second is : "<<num2<<endl;
}

int main()
{
	int num1,num2;
	cout<<"Enter two numbers : ";
	cin>>num1>>num2;
	swap(num1,num2)<<endl;
}