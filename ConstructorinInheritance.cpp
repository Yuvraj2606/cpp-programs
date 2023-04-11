#include<iostream>
using namespace std;
class Base1
{
    int data1;
    public: 
        Base1(int i)
        {
            data1 = i;
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
        Base2(int i)
        {
            data2 = i;
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
        Derived(int a,int b,int c,int d) : Base1(a),Base2(b)
        {
            data3 = c;
            data4 = d;
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



/*#include<iostream>
using namespace std;
class A
{
    protected:
        int var1;
    public:
        void set_var1(int a)
        {
            var1 = a;
        }
};
class B
{
    protected:
        int var2;
    public:
        void set_var2(int b)
        {
            var2 = b;
        }
};
class D : public A,public B
{
    public:
        void show()
        {
            cout<<"The Value of Var1 is : "<<var1<<endl;
            cout<<"The Value of Var2 is : "<<var2<<endl;
            cout<<"The Sum of Var1 and Var2 is : "<<var1+var2<<endl;
        }
};
int main ()
{
    D obj;
    obj.set_var1(500);
    obj.set_var2(600);
    obj.show();
    return 0;
}

/*
#include<iostream>
using namespace std;
class Apple
{
    protected:
        int var1;
    public:
        Apple(int i)
        {
            var1 = i;
        }
};
class Banana
{
    protected:
        int var2;
    public:
        Banana(int j)
        {
            var2 = j;
        }
};
/*class C
{
    protected:
        int var3;
    public:
        void set_var3(int c)
        {
            var3 = c;
        }
};
class Daddy : public Apple,public Banana
{
        int var3;
    public:
        Daddy(int a,int b,int c) : Apple(a),Banana(b)
        {
            var3 = c;
        }
        void show()
        {
            cout<<"The Value of Var1 is : "<<var1<<endl;
            cout<<"The Value of Var2 is : "<<var2<<endl;
            cout<<"The Value of Var3 is : "<<var3<<endl;
            cout<<"The Sum of Var1 , Var2 is : "<<var1+var2<<endl;
        }
};
int main ()
{
    Daddy obj(2,4,5);
    obj.show();
    return 0;
}

*/