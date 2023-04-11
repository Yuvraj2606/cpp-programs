/*#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        int b;
        void setdata()
        {
            a = 10;
            b = 20;
        }
        int getdata1()
        {
            return a;
        }
        int getdata2()
        {
            return b;
        }
};
class B : public A
{
    int c;
    public:
        void process()
        {
            c = b*getdata1();
        }
        void display()
        {
            cout<<"The Value of a is : "<<getdata1()<<endl;
            cout<<"The Value of b is : "<<b<<endl;
            cout<<"The Value of c is : "<<c<<endl;
        }
};
int main()
{
    B obj;
    obj.setdata();
    obj.process();
    obj.display();
    return 0;
}*/



#include<iostream>
using namespace std;

class A
{
    int a;
    public:
        int b;
        void setdata()
        {
            a = 10;
            b = 20;
        }
        int getdata1()
        {
            return a;
        }
        int getdata2()
        {
            return b;
        }
};
class B : private A
{
    int c;
    public:
        void process()
        {
            setdata();
            c = b*getdata1();
        }
        void display()
        {
            cout<<"The Value of a is : "<<getdata1()<<endl;
            cout<<"The Value of b is : "<<b<<endl;
            cout<<"The Value of c is : "<<c<<endl;
        }
};
int main()
{
    B obj;
    //obj.setdata();
    obj.process();
    obj.display();
    return 0;
}