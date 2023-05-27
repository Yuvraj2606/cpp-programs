/*#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        void setdata(int a1)
        {
            a = a1;
        }
        void getdata()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main()
{
    A obj;
    obj.setdata(5);
    obj.getdata();
    return 0;
}*/



/*#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        void setdata(int a1)
        {
            a = a1;
        }
        void getdata()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main()
{
    A a;
    a.setdata(5);
    a.getdata();
    return 0;
}*/


/*#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        void setdata(int a)
        {
            a = a;
        }
        void getdata()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main()
{
    A a;
    a.setdata(5);
    a.getdata();
    return 0;
}*/


//ABOVE CODE GIVE GARBAGE VALUE THAT'S WHY WE USE "this" KEYWORD FOR RESOLVE THE ERROR


/*#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        void setdata(int a)
        {
            this->a = a;
        }
        void getdata()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main()
{
    A obj;
    obj.setdata(5);
    obj.getdata();
    return 0;
}*/



//OTHER WORK OF "this" KEYWORD IS : 


/*#include<iostream>
using namespace std;
class A
{
    int a;
    public:
        A& setdata(int a)
        {
            this->a = a;
            return *this;
        }
        void getdata()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main()
{
    A a;
    a.setdata(4).getdata();
    return 0;                                          
}*/



#include<iostream>
using namespace std;
class A 
{
    int a;
    public:
        A& setdata(int b)
        {
            a=b;
        }
        A& getdata()
        {
            cout<<"The value of a is : "<<a<<endl;
        }
};
int main()
{
    A obj;
    obj.setdata(4);
    obj.getdata();
    return 0;
}