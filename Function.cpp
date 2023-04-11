/*#include<iostream>
using namespace std;
void Print()
{
    cout<<"Hello, This is Yuvraj Varshney";
}
int main()
{
    Print();
    return 0;
}*/

/*#include<iostream>
using namespace std;
int add(int a,int b)
{
    int add;
    add = a+b;
    return add;
}
int main()
{
    cout<<"The Addition of 2 and 3 is : "<<add(2,3)<<endl;
    cout<<"The Addition of 3 and 100 is : "<<add(3,100)<<endl;
    return 0;
}*/


/*#include<iostream>
using namespace std;
int add(int a,int b)
{
    int add;
    add = a+b;
    return add;
}
int sub(int a,int b)
{
    int sub;
    sub = a-b;
    return sub;
}
int mul(int a, int b)
{
    int mul;
    mul = a*b;
    return mul;
}
int di(int a,int b)
{
    float div;
    div = a/b;
    return div;
}
int main()
{
    int n1,n2;
    cout<<"Enter the value of number 1 : ";
    cin>>n1;
    cout<<"Enter the value of number 2 : ";
    cin>>n2;
    cout<<"The addition of "<<n1<<" and "<<n2<<" is : "<<add(n1,n2)<<endl;
    cout<<"The subtraction of "<<n1<<" and "<<n2<<" is : "<<sub(n1,n2)<<endl;
    cout<<"The multiplication of "<<n1<<" and "<<n2<<" is : "<<mul(n1,n2)<<endl;
    cout<<"The division of "<<n1<<" and "<<n2<<" is : "<<di(n1,n2)<<endl;
    return 0;
}*/


#include<iostream>
using namespace std;
void msg();  //Function Prototype
int main()
{
    msg();
    return 0;
}
void msg()   //Function Definition 
{
    cout<<"Hello Friends ";
}