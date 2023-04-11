/*#include<iostream>
using namespace std;

class Complex
{
    private:
        int a;
        int b;
    public:
        void setdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        void printno()
        {
            cout<<"The Complex No. is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    Complex c1,c2;
    
    c1.setdata(1,2);
    c1.printno();

    c2.setdata(3,4);
    c2.printno();
    return 0;
}*/


// Passing Object as a Function Argument 

/*#include<iostream>
using namespace std;

class Complex
{
    private:
        int a;
        int b;
    public:
        void setdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        void setdata_by_sum(Complex x,Complex y)  //Passing objects as a Function Arguments
        {
            a = x.a+y.a;
            b = x.b+y.b;
        }
        void printno()
        {
            cout<<"The Complex No. is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    Complex c1,c2;
    
    c1.setdata(1,2);
    c1.printno();

    c2.setdata(3,4);
    c2.printno();
    return 0;
}*/

#include<iostream>
using namespace std;

class Complex
{
    private:
        int a;
        int b;
    public:
        void setdata(int v1,int v2)
        {
            a=v1;
            b=v2;
        }
        void printno()
        {
            cout<<"The Complex No. is : "<<a<<" + "<<b<<"i"<<endl;
        }
};
int main()
{
    int x,y;
    Complex c1,c2;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    c1.setdata(x,y);
    c1.printno();

    return 0;
}

