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
}*/


#include<iostream>
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
class C
{
    protected:
        int var3;
    public:
        void set_var3(int c)
        {
            var3 = c;
        }
};
class D : public A,public B,public C
{
    public:
        void show()
        {
            cout<<"The Value of Var1 is : "<<var1<<endl;
            cout<<"The Value of Var2 is : "<<var2<<endl;
            cout<<"The Value of Var3 is : "<<var3<<endl;
            cout<<"The Sum of Var1 , Var2 and Var3 is : "<<var1+var2+var3<<endl;
        }
};
int main ()
{
    D obj;
    obj.set_var1(500);
    obj.set_var2(600);
    obj.set_var3(700);
    obj.show();
    return 0;
}

