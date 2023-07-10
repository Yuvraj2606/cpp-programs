#include<iostream>
using namespace std;
bool isEven(int a)
{
    if(a%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int num;
    cin>>num;
    if(isEven(num))
    {
        cout<<"The Number "<<num<<" is Even";
    }
    else{
        cout<<"The Number "<<num<<" is Odd";
    }
    return 0;
}