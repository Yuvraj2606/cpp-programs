// AMBIGUITY RESOLUTION IN INHERITANCE

/*#include<iostream>
using namespace std;

class Base1
{
    public:
        void print()
        {
            cout<<"Hello , Good Morning"<<endl;
        }
};
class Base2
{
    public:
        void print()
        {
            cout<<"Hello , I'm a Coder"<<endl;
        }
};
class Derived : public Base1 , public Base2
{

};
int main()
{
    Base1 B;
    B.print();
    Base2 b;
    b.print();
    Derived D;
    D.print();        //Here we get Ambigous error 
    return 0;
}*/



//Solution of Above error

#include<iostream>
using namespace std;

class Base1
{
    public:
        void print()
        {
            cout<<"Hello , Good Morning"<<endl;
        }
};
class Base2
{
    public:
        void print()
        {
            cout<<"Hello , I'm a Coder"<<endl;
        }
};
class Derived : public Base1 , public Base2
{
    public:
        void print()
        {
            Base1 :: print();
            Base2 :: print();
        }
};
int main()
{   cout<<endl;
    Base1 B;
    B.print();
    Base2 b;
    b.print();
    cout<<endl;
    cout<<"Here below lines use to show resolution of Ambigous Error"<<endl;
    cout<<endl;
    Derived D;
    D.print();     
    return 0;
}