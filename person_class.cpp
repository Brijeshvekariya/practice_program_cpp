#include<iostream>
#include<string>
using namespace std;

class person
{
	public:
		string name;
		int age;
		void personal()
		{
			cout<<"\n\nEnter your Name : ";
			cin.ignore();
			getline(cin,name);
			cout<<"Enter your Age : ";
			cin>> age;
		}
};
class student : public person
{
	public :
		int percentage;
		void input()
		{
			cout<<"\nEnter your Percentage : ";
			cin>>percentage;
		}
		void display()
		{
			cout<<"\n\nName is : "<<name<<endl
			<<"Your age is : "<<age<<" years "<<endl
			<<"Your Percentage is : "<<percentage<<" %"<<endl;
		}
};
class teacher : public person 
{
	public :
		double salary;
		void input()
		{
			cout<<"\nEnter your Salary per year : ";
			cin>>salary;
		}
		void display()
		{
			cout<<"\n\nName is : "<<name<<endl
			<<"Your age is : "<<age<<" years "<<endl
			<<"Your Salary is : "<<salary<<" /- per year"<<endl;
		}
};

int main()
{
	int choice;
	cout<<"Please select your role : "<<endl;
	cout<<"1. Teacher \n2. Student "<<endl;
	cin>>choice;
	if(choice == 1)
	{
		teacher t;
		t.personal();
		t.input();
		t.display();
	}
	else
	{
		student s;
		s.personal();
		s.input();
		s.display();
	}
}