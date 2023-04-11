#include<iostream>
using namespace std;
class complex
{
    int a,b;
    public:
        complex(int x,int y)
        {
            a = x;
            b = y;
        }
        complex(int x)
        {
            a = x;
            b = 0;
        }
        complex()
        {
            a = 0;
            b = 0;
        }
        void printno()
        {
            cout<<"Yous Complex Number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    complex c1(5,6);
    c1.printno();

    complex c2(2);
    c2.printno();

    complex c3;
    c3.printno();

    return 0;
}


/*#include<iostream>
using namespace std;
class rect
{
    int area;
    rect()
    {
        area = 0;
    }
    rect(int a,int b)
    {
        area = a*b;
    }
    void disp()
    {
        cout<<"The Area is : "<<area<<endl;
    }
};
int main()
{
    rect r1();
    r1.disp();

    rect r2(2,4);
    r2.disp();

    return 0;
}*/



