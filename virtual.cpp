#include<iostream>
using namespace std;
class BaseClass{
    public:
        int var_base=100;
        virtual void display(){
            cout<<"Base class Dispalying Base class variable var_base "<<var_base<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
            int var_derived;
            void display(){
                cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};

int main()
{
//	BaseClass b;
	DerivedClass d;
	d.var_base = 34;
	d.var_derived = 3400;
	d.display(); 
//	d.BaseClass::display();// without virtual

//    BaseClass * base_class_pointer;
//    BaseClass obj_base;
//    DerivedClass obj_derived;
//
//    base_class_pointer = &obj_derived;
//    base_class_pointer->display();//without virtual fun. base class display fun. called.
//    return 0;

}