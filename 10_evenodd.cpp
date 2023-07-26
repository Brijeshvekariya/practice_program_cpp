#include<iostream>
using namespace std;
class input
{
	public :
		int eventotal=0;
		int oddtotal=0;
		int num[10];
		input()
		{
			cout<<"Enter 10 elements :"<<endl;
			for(int i = 0;i<10;i++)
			{
				cout<<"Enter "<<i+1<<" Number : ";
				cin>>num[i];
			}
		}
		void evenodd()
		{
			cout<<"\nThe EVEN Elements are : ";
			for(int i = 0;i<10;i++)
			{
				if(num[i]%2 == 0)
				{
					cout<<num[i]<<" ";
					eventotal+=num[i];
				}
			}
			cout<<"\nThe ODD Elements are : ";
			for(int i = 0;i<10;i++)
			{
				if(num[i]%2 != 0)
				{
					cout<<num[i]<<" ";
					oddtotal+=num[i];
				}
			}
			cout<<"\n\n";
			cout<<"The Total of Even Numbers is : "<<eventotal<<endl;
			cout<<"The Total of odd Numbers is : "<<oddtotal<<endl;
			
		}
		
};

int main()
{
	input i;
	i.evenodd();
}
