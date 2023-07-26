#include<iostream>
using namespace std;

class fact
{
	public:
		int n;
		int fac =1;
		void input()
		{
			cout<<"Enter any Number : ";
			cin>>n;
		}
		void factorial(int n)
		{
			if(n>1)
			{
				fac*=n;
				factorial(n-1);
			}
			else
			{
				fac*=1;
			}
		}
		
		
};
int main()
{
	fact f;
	f.input();
	f.factorial(f.n);
	cout<<"The factorial is : "<<f.fac;
}