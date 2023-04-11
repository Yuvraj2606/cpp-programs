#include<iostream>
using namespace std;
class SimpleCal
{
    protected:
        int num1 ,num2;
    public:
        void set_num(int a,int b)
        {
            num1 = a,
            num2 = b;
        }
        void get_num()
        {
            cout<<"The Value of Number 1 is : "<<num1<<endl;
            cout<<"The Value of Number 2 is : "<<num2<<endl;
        }
};
class ScientificCal
{
    protected:
        float hypo,perpen,base;
    public:
        void setdata(int h,int p,int b)
        {
            hypo = h;
            perpen = p;
            base = b;
        }
        void getdata()
        {
            cout<<"The Value of Hypotenuse is : "<<hypo<<endl;
            cout<<"The Value of Perpendicular is : "<<perpen<<endl;
            cout<<"The Value of Base is : "<<base<<endl;
        }
};
class HybridCal : public SimpleCal , public ScientificCal
{
    public:
        void show()
        {
            get_num();
            cout<<"The Addition of num1 and num2 is : "<<num1+num2<<endl;
            cout<<"The Subtraction of num1 and num2 is : "<<num1-num2<<endl;
            cout<<"The Multiplication of num1 and num2 is : "<<num1*num2<<endl;
            cout<<"The Division of num1 and num2 is : "<<num1/num2<<endl;
            cout<<endl;
            getdata();
            cout<<"The Sin(Theta) of Right Angle Triangle is : "<<perpen/hypo<<endl;
            cout<<"The Cos(Theta) of Right Angle Triangle is : "<<base/hypo<<endl;
            cout<<"The Tan(Theta) of Right Angle Triangle is : "<<perpen/base<<endl;
            cout<<"The Cosec(Theta) of Right Angle Triangle is : "<<hypo/perpen<<endl;
            cout<<"The Sec(Theta) of Right Angle Triangle is : "<<hypo/perpen<<endl;
            cout<<"The Cot(Theta) of Right Angle Triangle is : "<<base/perpen<<endl;
        }
};
int main()
{
    HybridCal Values;
    Values.set_num(10,2);
    Values.setdata(5.0,4.0,3.0);
    Values.show();
    return 0;
}