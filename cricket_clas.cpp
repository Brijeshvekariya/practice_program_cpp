#include<iostream>
#include<string>
using namespace std;

class cricket
{
	public:
		string name;
		int age;
		cricket()
		{
			cout<<"-------- Welcome to Cricket Board --------"<<endl;
			cout<<"Enter your Name : ";
			getline(cin,name);
			cout<<"Enter your Age : ";
			cin>>age;
			cout<<"\nYour role is Batsman "<<endl;
		}
};

class batsman : public cricket
{
	public:
	int match, runs, century,average;
	batsman()
	{
	cout<<"\nMatches played:"<<endl;
	cin>>match;
	cout<<"Runs scored:"<<endl;
	cin>>runs;
	cout<<"Century:"<<endl;
	cin>>century;
	average=runs/match;
	}
	void displaydata()
	{
		cout<<"\n\nDear "<<name<<" ,\n\tYour role in team is : Batsman"<<endl;
		cout<<"\tMatches played: "<<match<<endl;
		cout<<"\tRuns scored:"<<runs<<endl;
		cout<<"\tCentury:"<<century<<endl;
		cout<<"\tAverage is : "<<average<<endl;
	}
};
int main()
{
	batsman b;
	b.displaydata();
}