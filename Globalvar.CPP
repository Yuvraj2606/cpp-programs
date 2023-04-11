#include<iostream>
using namespace std;
int c=100; //Global Variable
int main()
{
    int a,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    c=a+b;
    cout<<"The value of c is : "<<c<<endl;
    cout<<"The Global Value of c is : "<<::c<<endl;
    return 0;
}
