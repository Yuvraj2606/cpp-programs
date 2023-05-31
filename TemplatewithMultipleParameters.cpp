/*#include<iostream>
using namespace std;
template<class T1,class T2>
class A
{
    public:
     T1 data1;
     T2 data2;
     A(T1 a,T2 b)
     {
        data1 = a;
        data2 = b;
     }
     void display()
     {
        cout<<"The value of data1 and data2 is : "<<this->data1<<" and "<<this->data2;
     }
};
int main()
{
    A<int,float>obj(1,1.3); //HERE WE CAN WRITE ANY DATATYPE IN PLACE OF "int" AND "float" LIKE CHAR DOUBLE AND ETC
    obj.display();
    return 0;
}*/



#include<iostream>
using namespace std;
template<class T1,class T2>
class A
{
    public:
     T1 data1;
     T2 data2;
     A(T1 a,T2 b)
     {
        data1 = a;
        data2 = b;
     }
     void display()
     {
        cout<<"The value of data1 and data2 is : "<<data1<<" and "<<data2;
     }
};
int main()
{
    A<int,float>obj(1,1.3); //HERE WE CAN WRITE ANY DATATYPE IN PLACE OF "int" AND "float" LIKE CHAR DOUBLE AND ETC
    obj.display();
    return 0;
}

//BOTH ABOVE CODE GIVE SAME OUTPUT