#include<iostream>
using namespace std;

int main()
{
	int i,j,input[10];
	cout<<"Enter any 10 numbers :"<<endl;
	for(i=0; i<10;i++)
	{
		cout<<i+1<<" number : ";
		cin>>input[i];
	}
	for(i=0; i<10;i++)
	{
		cout<<"Entered "<<i+1<<" number is "<<input[i]<<endl; 
	}
	
}