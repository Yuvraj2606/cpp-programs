#include<iostream>
using namespace std;
void func(int a)
{
    cout<<"T am first function"<<endl<<"The value of a is : "<<a<<endl;
}
template <class T>
void func(T a)
{
    cout<<"I am Templatised Function"<<endl<<"The value of a is : "<<a<<endl;
}
int main()
{
    func(4);
    func(2.3);
    return 0;
}