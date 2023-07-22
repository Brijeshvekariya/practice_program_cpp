#include<iostream>
#include<string>
using namespace std;
string brand;
string modelname;
int buy;
void displaymenu()
{
	cout<<"------------Welcome to ROYAL Mobiles------------\n";
	cout<<"Please choose the brand from below options :\n\n";
	cout<<"1. Apple \n2. Samsung \n3. One plus \n\n";
	cout<<"Enter your choice :- ";
	cin>>brand;
}

class apple
{
	public :
		 apple()
		{
			cout<<"\n\n";
			cout<<"Please select model from below options : \n";
			cout<<"1. Iphone 14"<<endl<<"2. Iphone 13 "<<endl<<"3.Iphone 12 "<<endl;
			cout<<"Enter your choice :- ";
			cin.ignore();
			getline(cin,modelname);
//			cin>>modelname;
//			cout<<modelname;
		}
		void iphone14()
		{
			cout<<"\n\n";
			cout<<"Price of Iphone 14 is Rs. 92,000/- + gst 18% "<<endl;
			cout<<"Please select :\n1 for buy option \n2 for cancel option "<<endl;
			cin>>buy;
		}
		void iphone13()
		{
			cout<<"\n\n";
			cout<<"Price of Iphone 13 is Rs. 78,000/- + gst 18% \n";
			cout<<"Please select :\n1 for buy option \n2 for cancel option \n";
			cin>>buy;
			
		}
		void iphone12()
		{
			cout<<"\n\n";
			cout<<"Price of Iphone 12 is Rs. 62,000/- + gst 18% "<<endl;
			cout<<"Please select :\n1 for buy option \n2 for cancel option  "<<endl;
			cin>>buy;
			
		}
};

class samsung
{
	public :
		samsung()
		{
			cout<<"\n\n";
			cout<<"Please select model from below options : \n";
			cout<<"1. S23 "<<endl<<"2. S22 "<<endl<<"3.S21 "<<endl;
			cout<<"Enter your choice :- ";
			cin>>modelname;
		}
		void s23()
		{
			cout<<"\n\n";
			cout<<"Price of Samsung S23 is Rs. 85,000/- + gst 18% "<<endl;
			cout<<"Please select :\n1 for buy option \n2 for cancel option "<<endl;
			cin>>buy;
		}
		void s22()
		{
			cout<<"\n\n";
			cout<<"Price of Samsung S22 is Rs. 72,000/- + gst 18% "<<endl;
			cout<<"Please select :\n1 for buy option \n2 for cancel option "<<endl;
			cin>>buy;
		}	
		void s21()
		{
			cout<<"\n\n";
			cout<<"Price of Samsung S21 is Rs. 62,000/- + gst 18% "<<endl;
			cout<<"Please select :\n1 for buy option \n2 for cancel option "<<endl;
			cin>>buy;
		}
};

class oneplus
{
	public :
		oneplus()
		{
			cout<<"\n\n";
			cout<<"Please select model from below options : \n";
			cout<<"1. Nord6 "<<endl<<"2. Nord5 "<<endl<<"3. Nord4 "<<endl;
			cout<<"Enter your choice :- ";
			cin>>modelname;
		}
		void nord6()
		{
			cout<<"\n\n";
			cout<<"Price of OnePlus Nord 6 is Rs. 38,000/- + gst 18% "<<endl;
			cout<<"Please select :\n1 for buy option \n2 for cancel option "<<endl;
			cin>>buy;
		}
		void nord5()
		{
			cout<<"\n\n";
			cout<<"Price of OnePlus Nord 5 is Rs. 28,000/- + gst 18% "<<endl;
			cout<<"Please select :\n1 for buy option \n2 for cancel option "<<endl;
			cin>>buy;
		}	
		void nord4()
		{
			cout<<"\n\n";
			cout<<"Price of OnePlus Nord 4 is Rs. 22,000/- + gst 18% "<<endl;
			cout<<"Please select :\n1 for buy option \n2 for cancel option "<<endl;
			cin>>buy;
		}
};

int main()
{
	displaymenu();
	if(brand == "apple" || brand == "Apple")
	{
		apple mobile;
		if(modelname == "14" )
		{
			mobile.iphone14();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else if(modelname == "13")
		{
			mobile.iphone13();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else if(modelname == "12")
		{
			mobile.iphone12();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else
		{
			cout<<"Enter valid input";
		}
	}
	else if(brand == "samsung")
	{
		samsung mobile;
		if(modelname == "S23" || modelname == "s23")
		{
			mobile.s23();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else if(modelname == "S22" || modelname == "s22")
		{
			mobile.s22();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else if(modelname == "S21" || modelname == "s21")
		{
			mobile.s21();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else
		{
			cout<<"Enter only modelname "<<endl;
		}
	}
	else if(brand == "oneplus" || brand == "Oneplus" || brand == "ONEPLUS")
	{
		oneplus mobile;
		if(modelname == "nord6" || modelname == "Nord6")
		{
			mobile.nord6();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else if(modelname == "nord5" || modelname == "Nord5")
		{
			mobile.nord5();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else if(modelname == "nord4" || modelname == "Nord5")
		{
			mobile.nord4();
			if(buy == 1)
			{
				cout<<"Successfully product added to cart :)";
			}
			else
			{
				cout<<endl<<"quit";
			}
		}
		else
		{
			cout<<"Enter only modelname "<<endl;
		}
	}
	else
	{
		cout<<"Enter brand name in proper format"<<endl;
	}
}