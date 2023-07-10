#include<iostream>
using namespace std;
int factorial(int n)
{
    int fact = 1;
    for(int i=1;i<=n;i++)
    {
        fact = fact*i;
    }
    return fact;
}
int main()
{
    int a;
    cin>>a;
    cout<<"The Factorial of "<<a<<" is : "<<factorial(a);
    return 0;
}