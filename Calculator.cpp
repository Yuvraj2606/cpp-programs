#include<iostream>
using namespace std;
int main()
{
    int a,b;
    char op;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Which operation u want to perform : ";
    cin>>op;
    switch(op)
    {
        case '+':
            cout<<"The addition of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
            break;
        case '-':
            cout<<"The subtraction of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
            break;
        case '*':
            cout<<"The multiplication of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
            break;
        case '/':
            cout<<"The division of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
            break;
        case '%':
            cout<<"The modulus of "<<a<<" and "<<b<<" is : "<<a%b<<endl;
            break;    
        default:
            cout<<"Invalid Operator";
    }
    return 0;
}
