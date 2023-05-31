#include<iostream>
using namespace std;
template<class T1=int,class T2=float>
class A
{   
    public:
        T1 a;
        T2 b;
        A(T1 a,T2 b)
        {
            this->a=a;
            this->b=b;
        }
        void display()
        {
            cout<<"The value of a = "<<a<<endl;
            cout<<"The value of b = "<<b<<endl;
        }
};
int main()
{
    A<> obj(1,2.3);
    obj.display();
    return 0;
}