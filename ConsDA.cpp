#include<iostream>
using namespace std;
class prac
{
    int a,b,c;
    public:
        prac(int x,int y=9, int z=2)
        {
            a=x;
            b=y;
            c=z;
        }
        void disp()
        {
            cout<<"The value of a , b and c is : "<<a<<" , "<<b<<" and "<<c<<endl;
        }
};
int main()
{
    prac p1(1,2,3);
    p1.disp();

    prac p2(1,2);
    p2.disp();

    prac p3(1);
    p3.disp();
    return 0;
}