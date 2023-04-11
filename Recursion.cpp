#include<iostream>
using namespace std;
int fact(int n)
{
    if(n<1)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main()
{
    int a;
    cout<<"Enter the value of a : ";
    cin>>a;
    cout<<"The factorial of "<<a<<" is : "<<fact(a)<<endl;
    return 0;
}