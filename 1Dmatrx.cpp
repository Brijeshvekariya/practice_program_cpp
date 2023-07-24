#include<iostream>
using namespace std;

class matrix
{
	public :
		int arr[10];
		matrix operator +(matrix m2)
		{
			matrix result;
			for(int i = 0;i<10;i++)
			{
				result.arr[i] = arr[i] + m2.arr[i];
			}
			return result;
		}
		void input()
		{
			cout<<"Enter elements of first Matrix : "<<endl;
			matrix m1;
			for(int i = 0;i<10;i++)
			{
				cout<<"Enter "<<i+1<<" elements : ";
				cin>>m1.arr[i];
			}
			cout<<"Enter elements of Second Matrix : "<<endl;
			matrix m2;
			for(int i = 0;i<10;i++)
			{
				cout<<"Enter "<<i+1<<" elements : ";
				cin>>m2.arr[i];
			}
		}
};

int main()
{
	matrix m,m1,m2,result;
	m.input();
	result = m1 + m2;
	cout<<"Result is :";
	for(int i = 0;i<10;i++)
	{
		cout<<result.arr[i]<<" ";
	}
}