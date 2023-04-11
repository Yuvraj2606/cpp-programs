/*#include<iostream>
using namespace std;
int vol(int r,int h)
{
    return(3.14*r*r*h);
}
int vol(int a)
{
    return(a*a*a);
}
int main()
{
    cout<<"The volume of a cylinder whose radius r is : "<<5<<" and height h is : "<<10<<" is : "<<vol(5,10)<<endl;
    cout<<"The volume of a cube whose side a is : "<<5<<" is : "<<vol(5)<<endl;
    return 0;
}*/


#include<iostream>
using namespace std;
int vol(int r,int h)
{
    return(3.14*r*r*h);
}
int vol(int a)
{
    return(a*a*a);
}
int main()
{   int r,h,a;
    cout<<"Enter the radius of cylinder : ";
    cin>>r;
    cout<<"Enter the height of the cylinder : ";
    cin>>h;
    cout<<"The volume of a cylinder whose radius r is : "<<r<<" and height h is : "<<h<<" is : "<<vol(r,h)<<endl;
    cout<<"Enter the side of the cube : ";
    cin>>a;
    cout<<"The volume of a cube whose side a is : "<<a<<" is : "<<vol(a)<<endl;
    return 0;
}