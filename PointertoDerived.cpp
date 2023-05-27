#include<iostream>
using namespace std;
class Baseclass
{
    public:
        int var_base;
        void display()
        {
            cout<<"The value of variable of Base Class is : "<<var_base<<endl;
        }
};
class Derivedclass : public Baseclass
{
    public:
        int var_derived;
        void show()
        {
            cout<<"The value of variable f Derived Class is : "<<var_derived<<endl;
        }
};
int main()
{
    Baseclass *base_class_pointer;
    Baseclass obj_base;
    base_class_pointer = &obj_base;
    base_class_pointer -> var_base=45;
    base_class_pointer ->display();

    Derivedclass *derived_class_pointer;
    Derivedclass obj_derived;
    derived_class_pointer = &obj_derived;
    derived_class_pointer -> var_derived=54;
    derived_class_pointer ->show();

    
    base_class_pointer = &obj_derived; //POINTING BASE CLASS POINTER TO DERIVED CLASS
    base_class_pointer -> var_base=100; 
    //base_class_pointer -> var_derived=54; //WILL THROW AN ERROR
    base_class_pointer ->display();
    //base_class_pointer -> show(); //IT ASO THROW AN ERROR

     
    //derived_class_pointer = &obj_base; 
    derived_class_pointer -> var_base=101; 
    derived_class_pointer -> var_derived=500; 
    derived_class_pointer -> show();
    //derived_class_pointer ->display();

    return 0;
}