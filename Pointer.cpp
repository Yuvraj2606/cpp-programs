/*#include<iostream>
using namespace std;
int main()
{               
    int a=3;
    int *b=&a; // Pointer holds the address of the variable 
    // Address of the variable indicate by : &variable and we want to store it(address of the variable) in any other variable we use *nameofothervariable
    cout<<"The value of a : "<<a<<endl;
    cout<<"The address of the variable a : "<<&a<<endl;
    cout<<"The address of the variable a : "<<b;
    return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b=&a;
    cout<<"The address of variable b = "<<*b<<endl;
    return 0;
}*/



//POINTER TO POINTER

#include<iostream>
using namespace std;
int main()
{
    int a=3;
    int *b=&a;
    int **c=&b;
    cout<<"The value of a : "<<a<<endl;
    cout<<"The address of the variable a : "<<&a<<endl;
    cout<<"The address of the variable a : "<<b<<endl;
    cout<<"The value of b : "<<b<<endl;
    cout<<"The value at address b : "<<*b<<endl;
    cout<<"The address of the variable b : "<<&b<<endl;
    cout<<"The address of the variable b : "<<c<<endl;
    cout<<"The value of c : "<<c<<endl;
    cout<<"The value at address c : "<<*c<<endl;
    cout<<"The address of the variable c : "<<&c<<endl;
    cout<<"The (value at address(value at address)) c : "<<**c<<endl;
    return 0;
}