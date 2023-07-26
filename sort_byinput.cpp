#include<iostream>

template <class obj>
void sort(obj array[], int n)
{
	for(int i = 0;i<n;i++)
	{
		for(int j =i+1 ;j<n;j++)
		{
			if(array[i] > array[j])
			{
				obj t;
				t = array[i];
				array[i] = array[j];
				array[j] = t;
			}
		}
	}
		std::cout<<"\n\nThe Final Array in Ascending is : "<<std::endl;
	for(int i = 0;i<n;i++)
	{
		std::cout<<array[i]<<" ";
	}
}

int main()
{
	int n;
	std :: cout<<"Enter Number of Elements of Array : ";
	std :: cin>>n;
    int array[n];
    for(int i = 0;i<n;i++)
    {
    std :: cout<<"Enter "<<i+1<<" number : ";
    std :: cin>>array[i];
//    std :: cout<<"Enter Second numbers : ";
//    std :: cin>>num2;
}
    sort(array,n);
    return 0;
}