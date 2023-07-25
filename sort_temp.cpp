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
	for(int i = 0;i<n;i++)
	{
		std::cout<<array[i]<<" ";
	}
}

int main()
{
    int array[5];
    for(int i = 0;i<5;i++)
    {
    std :: cout<<"Enter "<<i+1<<" number : ";
    std :: cin>>array[i];
//    std :: cout<<"Enter Second numbers : ";
//    std :: cin>>num2;
}
    sort(array,5);
    return 0;
}