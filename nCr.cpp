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
int nCr(int n , int r)
{
    int num = factorial(n);
    int dem = factorial(r)*factorial(n-r);
    return num/dem;
}
int main()
{
    int n,r;
    cin>>n>>r;
    cout<<"The Combination of n and r is : "<<nCr(n,r);
    return 0;
}