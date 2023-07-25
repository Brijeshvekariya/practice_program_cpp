#include<iostream>

template <class obj>
void swap(obj &num1,obj &num2)
{
    num1+=num2;
    num2 = num1-num2;
    num1-=num2;
    std :: cout<<"\n\nAfter Swapping two numbers First number is : "<<num1<<" and second is : "<<num2;
}

int main()
{
    int num1,num2;
    std :: cout<<"Enter first numbers : ";
    std :: cin>>num1;
    std :: cout<<"Enter Second numbers : ";
    std :: cin>>num2;
    swap(num1,num2);
    return 0;
}