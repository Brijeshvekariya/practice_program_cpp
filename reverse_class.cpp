#include<iostream>
using namespace std;

class rev
{
	public:
		int n;
		int result =0;
		void input()
		{
			cout<<"Enter any Number : ";
			cin>>n;
		}
		int j=n;
		void reverse(int j)
		{
			if(j>=0)
			{
			int remainder;	
			remainder  = n%10;
			result = result *10 + remainder;
			n = n/10;
			j = j/10; 
			reverse(j-1); 
			}
			else
			{
				result = result*1;
			}
			
		}
		
		
		
};
int main()
{
	rev f;
	f.input();
	f.reverse(f.n);
	cout<<"The Reverse is : "<<f.result;
}