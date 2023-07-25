#include<iostream>
using namespace std;
class BaseClass{
    public:
//        int var_base;
        virtual void display(){
            cout<<"voice :"<<endl;
        }
};

class DerivedClass : public BaseClass{
    public:
//            int var_derived;
            void display(){
                cout<<"Woow"<<endl;
//                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
            }
};
//class Der : public BaseClass{
//    public:
////            int var_derived;
//            void display(){
//                cout<<"Meow"<<endl;
////                cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
//            }
//};
int main(){
    BaseClass * b;
    BaseClass obj_base;
    DerivedClass d;
    b = &d; // Pointing base class pointer to derived class
	b->display();
//    d.display();

//	de.display();
    return 0;
}
