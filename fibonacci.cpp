#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=1;
    int value;
    cin>>n;
    cout<<a<<" "<<b<<" ";
    for(int i=0;i<n;i++)
    {
        value = a+b;
        cout<<value<<" ";
        a=b;
        b=value;
    }
    return 0;
}