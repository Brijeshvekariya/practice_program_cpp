#include<iostream>
using namespace std;
int n;

class student
{
	public :
		string name;
		
		int marks[100];
		void input()
		{
			cout<<"Enter you name : ";
			cin.ignore();
			getline(cin,name);
			for(int i=0;i<n;i++)
			{
				cout<<"Enter your marks of "<<i+1<<" subject : ";
				cin>>marks[i];
			}
		}
		void display()
		{
			int total = 0;
			cout<<endl<<name<<endl;
			for(int i=0;i<n;i++)
			{
				cout<<"Your marks of "<<i+1<<"subject is : "<<marks[i]<<endl;
				total += marks[i];
			}
			cout<<"Percentage of "<<name<<" is : "<<total/n<<" %\n"<<endl;
		}
};

int main()
{
	int a;
	cout<<"Enter number of students : ";
	cin>>a;
	cout<<"Enter number of subjects : ";
	cin>>n;
	student s[a];
	for(int i=0;i<a;i++)
	{
		cout<<endl;
		s[i].input();
	}
	for(int i=0;i<a;i++)
	{
		s[i].display();
	}
}