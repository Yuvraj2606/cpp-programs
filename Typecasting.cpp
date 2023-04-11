#include<iostream>
using namespace std;
int main()
{
    int a=45;
    float b=45.46;
    cout<<"The value of a is : "<<a<<endl;
    cout<<"The float value of a is : "<<(float)a<<endl;
    cout<<"The float value of a is : "<<float(a)<<endl;
    cout<<"The value of b is : "<<b<<endl;
    cout<<"The integer value of b is : "<<(int)b<<endl;
    cout<<"The integer value of b is : "<<int(b)<<endl;
    cout<<"The value of expression (a+b) is : "<<a+b<<endl;
    cout<<"The value of expression(a + intb) is :  "<<a+int(b)<<endl;
    cout<<"The value of expression(a + intb) is :  "<<a+(int)b<<endl;
    cout<<"The value of expression (flaota + b) is : "<<float(a)+b<<endl;
    cout<<"The value of expression (flaota + b) is : "<<(float)a+b<<endl;
    return 0;
}
