/*#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
        public:
            A(int i,int j) : a(i) , b(j){
                cout<<"The value of a is : "<<a<<endl;
                cout<<"The value of b is : "<<b<<endl;
            
            }
            /*void printdata()
            {
                cout<<"The value of a is : "<<a<<endl;
                cout<<"The value of b is : "<<b<<endl;
            }
};
int main()
{
    A obj(4,5);
    //obj.printdata();
    return 0;
}
*/

#include<iostream>
using namespace std;
class Base1
{
    int data1;
    public: 
        Base1(int i) : data1(i)
        {
            
            cout<<"Base1 Class Constructor Called "<<endl;
        }
        void printdata1()
        {
            cout<<"The Value of Data1 is : "<<data1<<endl;
        }
};
class Base2
{
    int data2;
    public:
        Base2(int i) : data2(i)
        {
            
            cout<<"Base2 Class Constructor Called "<<endl;
        }
        void printdata2()
        {
            cout<<"The Value of Data2 is : "<<data2<<endl;
        }
};
class Derived : public Base2 , public Base1
{
    int data3,data4;
    public:
        Derived(int a,int b,int c,int d) : Base1(a),Base2(b), data3(c) , data4(d)
        {
           
            cout<<"The Derived Class Constructor Called "<<endl;
        }
        void printderiveddata()
        {
            cout<<"The value of Data3 is : "<<data3<<endl;
            cout<<"The value of Data4 is : "<<data4<<endl;
        }
};
int main()
{
    Derived D(1,2,3,4);
    //cout<<"Base1 Class Constructor Called "<<endl;
    D.printdata1();
    //cout<<"Base2 Class Constructor Called "<<endl;
    D.printdata2();
    //cout<<"The Derived Class Constructor Called "<<endl;
    D.printderiveddata();
    return 0;
}

