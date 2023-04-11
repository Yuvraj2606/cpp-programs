/*#include<iostream>
using namespace std;

//Base Class
class Employee
{
    public:
        int id;
        float salary;
        Employee(int inpId)
        {
            id = inpId;
            salary = 24000;
        }
        Employee(){}
};

//Derived Class
class Programmer : public Employee
{
    public:
        int languagecode;
        Programmer(){}
        Programmer(int inpId)
        {
            id = inpId;
            languagecode = 9;
        }
        void getdata()
        {
            cout<<"ID of the Programmer : "<<id<<endl;
        }
};
int main()
{
    Employee E1(1),E2(2);
    cout<<"Salary of Employee E1 is : "<<E1.salary<<endl;
    cout<<"Salary of Employee E2 is : "<<E2.salary<<endl;
    
    Programmer P1(10);
    cout<<"The Languagecode of the Programmer is : "<<P1.languagecode<<endl;
    P1.getdata();
    return 0;
}*/

/*#include<iostream>
using namespace std;

class Person 
{
    int id;
    char name[100];
    public: 
        void setdata()
        {
            cout<<"Enter the ID : ";
            cin>>id;
            cout<<"Enter the Name : ";
            cin>>name;
        }
        void display()
        {
            cout<<endl<<id<<"\t"<<name<<"\t";
        }
};
class Student : private Person
{
    char course[50];
    int fee;
    public:
     void set_s()
        {
            setdata();
            cout<<"Enter the Course Name:";
            cin>>course;
            cout<<"Enter the Course Fee:";
            cin>>fee;
        }
          
        void display_s()
        {
            display();
            cout<<course<<"\t"<<fee<<endl;
        }    
};
int main()
{
    Student s;
    s.set_s();
    s.display_s();
    return 0;
}*/

// Example:

// C++ program to explain
// Single inheritance
#include<iostream>
using namespace std;

// base class
class Vehicle {
public:
	Vehicle()
	{
	cout << "This is a Vehicle\n";
	}
};

// sub class derived from a single base classes
class Car : public Vehicle {

};

// main function
int main()
{
	// Creating object of sub class will
	// invoke the constructor of base classes
	Car obj;
	return 0;
}


